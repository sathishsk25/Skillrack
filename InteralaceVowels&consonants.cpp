#include <bits/stdc++.h>
using namespace std;
int isVowel(char ch){
    ch= tolower(ch);
    if(ch=='a' || ch=='o' || ch=='i' || ch=='e' || ch=='u') return 1;
    else return 0;
}

int main(int argc, char** argv)
{
    char str[100],vow[100],cons[100];
    int k=0,l=0;
    cin >> str;
    
    for(int i=0; i<strlen(str); i++){
        if(isVowel(str[i])) vow[k++] = str[i];
        else cons[l++] = str[i];
    }
    vow[k] = '\0';
    cons[l] = '\0';
    
    for(int i=0; i<k; i++){
        cout << vow[i];
        if(strlen(cons)!=0){
            cout << cons[strlen(cons)-1];
            cons[strlen(cons)-1] = '\0';
        }
    }
    
    if(strlen(cons)!=0){
        for(int i=strlen(cons)-1; i>=0; i--)
        cout << cons[i];
    }
}

/* 
Your Input	
skillrack
Your Program Output:
ikacrllks 
*/
