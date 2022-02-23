#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv){

int  N,l=0;
cin >> N;
int binary[32];

while(N!=0){
    binary[l++] = N%2;
    N/=2;
}

char vowels[] = "aeiou";
char cons[] = "bcdfghjklmnpqrstvwxyz";
int v=0,c=0;
for(int i=l-1; i>=0; i--){
    if(binary[i]==0)
        cout << vowels[(v++)%5];
    else
        cout << cons[(c++)%21];
}
}
/*Your Input : 528
Your Program Output:
baeiocuaei */
