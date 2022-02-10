#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int temp = *a; 
    *a = *b;
    *b = temp;
}
int FactorsCount(int n){
    int i,c=0; 
    for(i=1; i<=sqrt(n); i++){
        if(n%i==0){
            c++;
            if(n/i != i)
            c++; 
        }
    }
    return c;
}

int main(int argc, char** argv)
{
    int n;
    cin >> n;
    int i,j,k=0;
    int arr[1000][2];
    
    for(i=1; i<=sqrt(n); i++){
        if(n%i==0){
            arr[k][0]=i;
            arr[k++][1] = FactorsCount(i);
            if(n/i != i){
                arr[k][0] = n/i;
                arr[k++][1] = FactorsCount(n/i);
            }
        }
    }
    
for(i=0; i<k-1; i++){
    for(j=0; j<k-i-1; j++ ){
        if(arr[j][1]<arr[j+1][1]){
            swap(&arr[j][0],&arr[j+1][0]);
            swap(&arr[j][1],&arr[j+1][1]);
        }
        if(arr[j][1] == arr[j+1][1]){
            if(arr[j][0]<arr[j+1][0]){
                swap(&arr[j][0],&arr[j+1][0]);
                swap(&arr[j][1],&arr[j+1][1]);
            }
        }
    }
}
for(i=0; i<k; i++)
cout << arr[i][0] << " ";
}
