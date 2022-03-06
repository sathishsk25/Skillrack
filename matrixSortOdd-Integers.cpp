#include<iostream>
using namespace std;

int main(){
    int R,C;
    cin >> R >> C;
    int mat[R][C],odds[R*C],l=0,m=0;
    
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            cin >> mat[i][j];
            if(mat[i][j]%2!=0)
            odds[l++] = mat[i][j];
        }
    }
    for(int i=0; i<l-1; i++){
        for(int j=i+1; j<l; j++){
            if(odds[i]>odds[j]){
                int temp = odds[i];
                odds[i] = odds[j];
                odds[j] = temp;
            }
        }
    }
    
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            if(mat[i][j]%2==0)
            cout <<  mat[i][j] << " ";
            else
            cout << odds[m++] << " ";
        }
        cout << endl;
    }
}
