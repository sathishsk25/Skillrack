#include <bits/stdc++.h>
#include <string>
using namespace std;

char* splitEvenLenWords(char *str){
    char *strs = (char*)malloc(sizeof(char)*101);
    char* token;
    token = strtok(str," ");
    
    while(token != NULL){
        if(strlen(token)%2==0){
            int len=0;
            char temp[100];
            for(int i=0; i<strlen(token); i++){
                if(i==strlen(token)/2)
                temp[len++] = ' ';
                temp[len++] = token[i]; 
            }
        temp[len] = '\0';
        strcat(strs, temp);
        strcat(strs, " ");
        }
        else{
            strcat(strs, token);
            strcat(strs, " ");
        }
        token = strtok(NULL, " ");
    }
    return strs;
}

int main(int argc, char** argv)
{
char str[100];
scanf("%[^\n]",str);
char *revStr = splitEvenLenWords(str);
cout << revStr;
}
