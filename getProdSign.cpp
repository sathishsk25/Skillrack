#include<iostream>
#include<cmath>
using namespace std;

int getProdSign(int n, int arr[]){
    int Negcount=0;
    for(int i=0; i<n; i++){
        if(arr[i]==0) return 0;
        if(arr[i]<0) Negcount++;
    }
    return (Negcount%2==0)?1:-1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    cin >> arr[i];
    cout << getProdSign(n,arr);
}
