#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char temp[101],str[1001][101];
    int i,j,N=0;
    
    while(scanf("%s ",&str[N])==1){
        N++;
    }

    for(i=0; i<N-1; i++){
        for(j=0; j<N-1-i; j++){
            char l1 = str[j][strlen(str[j])-1];
            char l2 = str[j+1][strlen(str[j+1])-1];
            if(l1 > l2){
            strcpy(temp,str[j]);
            strcpy(str[j],str[j+1]);
            strcpy(str[j+1],temp);
        }
        }
    }

    for(i=0; i<N; i++)
    cout << str[i] << " ";
}
