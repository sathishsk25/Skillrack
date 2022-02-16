#include<iostream>
using namespace std;
int main(){
    int N,K,i,j;
    cin >> N >> K;
    int mat[N][N];
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            cin >> mat[i][j];
        }
    }

int r,c;
    for(j=1; j<=N/2; j++){
        if(mat[0][j]==K){
            int flag = 0;

            c = j; r = 0;
            while(r<j){
                r++; c--;
                if(mat[r][c] != K) flag = 1;
            }

            c = j; r = 0;
            while(r<j){
                r++; c++;
                if(mat[r][c] != K) flag = 1;
            }

            r=j; c=0;
            while(c<(2*j)-1){
                c++;
                if(mat[r][c] != K) flag = 1;
            }

            if(flag==0){
                cout << "Yes";
                exit(0);
            }
        }
    }
        cout << "No";

}