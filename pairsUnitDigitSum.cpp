#include<iostream>
using namespace std;
int main(){
    int i,j,k=0,l=0,flag=0,count=0;
    unsigned long long n;
    cin >> n;
    int unit = n%10;
    n/=10;
    int arr[20],diff[20];
    while(n!=0){
        arr[k++] = n%10;
        n/=10;
    }
    for(i=0; i<k; i++){
        for(j=i+1; j<k; j++){
            int f=0;
            if(arr[i]+arr[j]==unit){
                for(int a=0; a<l; a++){
                    if(abs(arr[i]-arr[j])==diff[a]){
                        f=1; 
                        break;
                    }
                    }
                    if(f==0){
                        count++;
                        flag=1;
                        diff[l++]=abs(arr[i]-arr[j]);        
                }
            }
        }
    }
    (flag==0)?cout <<"-1":cout << count;
}