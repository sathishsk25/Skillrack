#include <stdio.h>
#include <stdlib.h>

char* ASCIItoStr(int size, int *arr){
     char* str =malloc(sizeof(char*)*size+1);
     for(int i=0; i<size; i++)
     str[i] = (char)arr[i];
     str[size] = '\0';
     return str;
 }

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    scanf("%d ",&arr[i]);
    char *str = ASCIItoStr(n,arr);
    if(str[0]=='\0')
    printf("String is empty\n");
    printf("%s",str);
    return 0;
}
