#include<iostream>
using namespace std;

int main(){
    int m,n,i,j,c=0;
    cin >> m >> n;
    int arr[n];
    for(i=0; i<n; i++){
        arr[i] = i+1;
    }
    for(i=1; i<=m; i++){
        for(j=0; j<n; j++){
            if((arr[j]+i)%5==0 && arr[j]!=-1){
                c++;
                arr[j] = -1;
                break;
            }
        }
    }
    cout << c;
}