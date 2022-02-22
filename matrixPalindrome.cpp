#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
int R,C;
cin >> R >> C;
int mat[R][C];

for(int i=0; i<R; i++){
    for(int j=0; j<C; j++){
        cin >> mat[i][j] ;
    }
}

//checking all the row values

for(int i=0; i<R; i++){
    for(int j=0; j<C/2; j++){
        if(mat[i][j] != mat[i][C-j-1]){
            cout << "NO";
            exit(0);
        }
    }
}

//checking all the col values

for(int i=0; i<C; i++){
    for(int j=0; j<R/2; j++){
        if(mat[j][i]!=mat[R-j-1][i]){
            cout << "NO";
            exit(0);
        }
    }
}
cout << "YES";
}
