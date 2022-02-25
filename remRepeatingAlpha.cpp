#include <bits/stdc++.h>
using namespace std;

void remRepeatingAlpha(char str[]){
    while(1){
        int flag=0;
        for(int i=0; i<strlen(str)-1; i++){
            if(str[i]==str[i+1]){
                for(int j=i+2; j<strlen(str); j++)
                str[j-2]= str[j];
                str[strlen(str)-2] = '\0';
                int flag=1;
                break;
            }
        }
        if(flag==0)
        break;
    }
}

int main(int argc, char** argv){
char str[100];
cin >> str;
remRepeatingAlpha(str);
cout << str;
}
