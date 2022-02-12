#include <bits/stdc++.h>
 
using namespace std;

int odd(int n){
    int sum=0;
    while(n != 0){
    if((n%10)%2==1)
    sum += n%10;
    n /= 10;
    }
    return sum;
}

int even (int n){
    int sum =0;
    while(n!=0){
        if((n%10)%2==0)
        sum += n%10;
        n /= 10;
    }
    return sum;
}
int main(int argc, char** argv)
{

int n;   
cin >> n;
int arr[n],sumOfEven=0,sumOfOdd=0; 

for(int i=0; i<n; i++){
cin >> arr[i];
sumOfOdd += odd(arr[i]);
sumOfEven  += even(arr[i]);
}

for(int i=0; i<n; i++){
    if(arr[i]%2==0){
        cout << arr[i] + sumOfEven - even(arr[i]) << " ";
    }
    else
    cout << arr[i] + sumOfOdd - odd(arr[i]) << " ";
}

}
