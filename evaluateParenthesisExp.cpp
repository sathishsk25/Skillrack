#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[101];
    cin >> str;
    int num=0,sum=0,level=0;
    for(int i=0; i<strlen(str); i++){
        if(str[i]=='('){
            if(num != 0){
                sum += num*level;
            }
            num=0; level++;
        }
        else if(str[i]==')'){
            if(num != 0){
                sum += num*level;
            }
            num=0; level--;
        }
        else{
            num = (num*10) + str[i]-'0';
        }
    }
    cout << sum;
}
