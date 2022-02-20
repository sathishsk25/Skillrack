#include<stdio.h>
#include<stdlib.h>

char* getAbb(char *str){
    char* abb = malloc(sizeof(char*)*strlen(str));
    int len=0;
    for(int i=0; i<strlen(str); i++){
        if((str[i-1]==' ' && i>0) || i==0){
            abb[len++] = toupper(str[i]);
        }
    }
    return abb;
}

int main(){
char str[1001];
scanf("%[^\n]",str);
char *abb=getAbb(str);
printf("%s",abb);
}
