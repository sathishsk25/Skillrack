#include<stdio.h>
#include <stdlib.h>
int main(){

int num,sum=0,rem;
scanf("%d",&num);
while(num>0){
while(num!=0){
rem=num%10;
sum=sum+rem;
num=num/10;

}
if(sum>9){
num=sum;
sum=0;
}
}
printf("%d",sum);
return 0;

}
