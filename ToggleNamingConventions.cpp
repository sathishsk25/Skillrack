#include <bits/stdc++.h>
 
using namespace std;

char* toggle(char str[]){
    
char result[10000];
int l=0;
for(int i=0; i<strlen(str); i++){
    if(str[i]=='_'){
        i++;
        result[l++] = toupper(str[i]);
    }
    else if(isupper(str[i])){
        result[l++] = '_';
        result[l++] = tolower(str[i]);
    }
    else 
    result[l++] = str[i];
}
cout << result;
return "";
} 


int main(int argc, char** argv)
{
char str[1000];
cin >> str;;
toggle(str);
}

/*
ip 1 : sathishKumar 
op 1:  sathish_kumar

ip 2:  sathish_kumar
op 2 : sathishKumar 
*/

