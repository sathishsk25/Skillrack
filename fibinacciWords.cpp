#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin >> n;
char first[100001]="a",second[100001]="b";
if(n==0) cout << first,exit(0);
cout << first << " " << second << " ";
n-=2;
while(n){
    char next[100001];
    sprintf(next,"%s%s",second,first);
    cout << next << " ";
    strcpy(first, second);
    strcpy(second, next);
    n--;
}
}
