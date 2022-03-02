#include <bits/stdc++.h>
 
using namespace std;

int leapYear(int y){
    if(y%400==0)
    return 1;
    else if(y%100==0)
    return 0;
    else if(y%4==0)
    return 1;
    else
    return 0;
}

char printMonth(int month){
    char mon[12][12]={"January ","Febuary ","March ","April ","May ","June ","July ","August ","September ","October ","November ","December "};
    cout << mon[month];
}
int main(int argc, char** argv)
{
int dd,yyyy;
char date[50],mm[10];
cin >> date;
yyyy = atoi(&date[7]);
date[6]='\0';
strcpy(mm,&date[3]);
date[2]='\0';
dd= atoi(date);

char months[12][12] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
if(leapYear(yyyy))
days[1]++;

for(int i=0; i<12; i++){
    if(strcmp(months[i],mm)==0){
        if(i==0){
            cout << "December " << yyyy-1 << " - 31 days" << endl;
            cout << "Febuary " << yyyy << " - " << days[i+1] <<" days";
        }
        else if(i==11){
            cout << "November " << yyyy << " - 30 days" << endl;
            cout << "January " << yyyy+1 << " - 31 days";
        }
        else{
        cout << printMonth(i-1) << yyyy << " - " << days[i-1] << " days" << endl;
        cout << printMonth(i+1) << yyyy <<" - "<< days[i+1] << " days";
    }
    }
}

}
