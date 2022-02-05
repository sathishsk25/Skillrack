#include <bits/stdc++.h>
using namespace std;


int main(int argc, char** argv)
{
int R,C,X,i,j;
cin >> R >> C;
int mat[R][C];
for(i=0; i<R; i++){
    for(j=0; j<C; j++){
        cin >> mat[i][j];
    }
}
cin >> X;

int minR,minC,maxR,maxC;
for(i=0; i<R; i++){
    for(j=0; j<C; j++){
        if(mat[i][j]==X){
            minR=i;
            maxR=i;
            minC=j;
            maxC=j;
        }
    }
}

while(minR>0 && maxR<R-1 && minC>0 && maxC<C-1){
    minC--;
    minR--;
    maxC++;
    maxR++;
}

for(i=minR; i<=maxR; i++){
    for(j=minC; j<=maxC; j++){
        cout << mat[i][j];
    }
    cout << endl;
}
}
