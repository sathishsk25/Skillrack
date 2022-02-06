#include <bits/stdc++.h>
using namespace std;

int swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(int argc, char** argv){
    int R,C,i,j;
    cin >> R >> C;
    int mat[R][C];
    
    for(i=0; i<R; i++){
        for(j=0; j<C; j++){
            cin >> mat[i][j];
        }
    }
    
    int arr[C][2];
    for(i=0; i<C; i++){
        int max = 0;
        for(j=0; j<R; j++){
            if(mat[j][i]>max)
            max = mat[j][i];
        }
        arr[i][0] = i;
        arr[i][1] = max;
    }
    
    for(i=0; i<C-1; i++){
        for(j=0; j<C-i-1; j++){
            if(arr[j][1]>arr[j+1][1]){
                swap(&arr[j][1],&arr[j+1][1]);
                swap(&arr[j][0],&arr[j+1][0]);
            }
        }
    }
    
    for(i=0; i<R; i++){
        for(j=0; j<C; j++){
            int col = arr[j][0];
            cout << mat[i][col] << " ";
        }
        cout << endl;
    }
}
