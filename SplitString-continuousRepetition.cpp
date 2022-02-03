#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
char str[101];
cin >> str;
int arr[101],l=0;
for(int i=0; i<strlen(str)-1; i++){
     int count =1, start = i;
     for(int j=i+1; j<strlen(str); j++){
         if(str[i]==str[j]){
             i=j;
             count++;
         }
         if(str[i]!=str[j] || j==strlen(str)-1)
         break;
     }
     if(count%2==0)
     arr[l++] = ((i-start + 1)/2) +  start;
}
 for(int i=0; i<strlen(str); i++){
     int flag=0;
     for(int j=0; j<l; j++){
        if(i==arr[j])
        flag=1; 
     }
    if(flag==1)
    cout << endl;
    cout << str[i];
 }
}
