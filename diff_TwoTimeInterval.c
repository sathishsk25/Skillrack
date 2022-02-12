#include<stdio.h>
 
int toSec(char* time){
    int hh=-1,mm=-1,ss=-1,l=0;
    for(int i=0; i<strlen(time); i++){
        if(isdigit(time[i])){
            l= 10*l + (time[i]-48);
        }
        else if(hh==-1){
            hh = l;
            l=0;
        }
        else{
            mm=l;
            l=0;
        }
    }
    ss=l;
    return hh*3600 + mm*60 + ss;
}

int main()
{
    char inTime[20],outTime[20];
    int diff;
    scanf("%s\n%s",inTime,outTime);
    int inTimeS = toSec(inTime);
    int outTimeS = toSec(outTime);
    diff = outTimeS - inTimeS;
    
    int HH = diff/3600;
    diff = diff-(HH*3600);
    
    int MM = diff/60;
    diff = diff-(MM*60);
    
    int SS = diff;
    
    (HH<10)?printf("0%d:",HH):printf("%d:",HH);
    (MM<10)?printf("0%d:",MM):printf("%d:",MM);
    (SS<10)?printf("0%d",SS):printf("%d",SS);
}
