#include <bits/stdc++.h>
using namespace std;

int squareEnds(int N){
    char str[100],res[100];
    sprintf(str,"%d",N);
    int len = strlen(str);
    int first = str[0]-48;
    int last = str[len-1]-48;
    str[len-1]='\0';
    first = pow(first,2);
    last = pow(last,2);
    sprintf(res,"%d%s%d",first,&str[1],last);
    return atoi(res);
    
}

int main(int argc, char** argv)
{
int N;
cin >> N;
cout << squareEnds(N);
}
