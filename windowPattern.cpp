#include<iostream>
#include<cmath>
using namespace std;

void printOP(int C, int N){
    cout << "+";
    for(int i=0; i<C; i++){
        cout << "-";
        if((i+1)%N==0)cout << "+";
    }
    cout << "\n";
}

void printAS(int C, int N ){
    cout << "|";
    for(int i=0; i<C; i++){
        cout << "*";
        if((i+1)%N==0) cout << "|";
    }
    cout << "\n";
}

int main()
{
    int N,X,i;
    cin >> N >> X;
    int S = sqrt(X);
    printOP(N*S, N);
    for(i=0; i<N*S; i++){
        printAS(N*S, N);
        if((i+1)%N==0) printOP(N*S,N);
    }
}
