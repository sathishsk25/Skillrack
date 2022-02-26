#include <bits/stdc++.h>
using namespace std;

int main(){
    char str[100];
    cin >> str;
    int pos=-1,max=0;
    
    for(int i=0; i<strlen(str); i++){
        int count=0; 
        if(str[i]=='s' && str[i+1]=='r' && i>=pos){
            count = 2;
            for(int j=i+2; j<strlen(str); j += 2){
                if(str[j]=='s' && str[j+1]=='r')
                count+=2;
                else{
                    pos = j;
                    break;
                }
            }
            if(count > max) 
            max = count;
        }
        
    }
    cout << max;
}
