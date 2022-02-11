#include <bits/stdc++.h>
 
using namespace std;

int isPrime(int n){
    if(n==0 || n==1) return 0;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return 0;
    }
    return 1;
}
int main(int argc, char** argv)
{
char n[20];
cin >> n;
for(int ind=0; ind<strlen(n); ind++){
    char temp[20];
    strcpy(temp,n);
    for(char i='0'; i<='9'; i++){
        temp[ind] = i;
        if(isPrime(atoi(temp)))
        cout << "NO",exit(0);
    }
}
cout << "YES";
}
