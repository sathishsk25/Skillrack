#include <bits/stdc++.h>
 
using namespace std;
void swap(int *a, int *b){
    int temp = *a;
    *a = *b; 
    *b = temp;
} 

int main(int argc, char** argv)
{
int r,c,i,j;
cin >> r >> c;
int mat[r][c],arr[r][2];

for(i=0; i<r; i++){
    int evenCount =0; 
    for(j=0; j<c; j++){
        cin >> mat[i][j];
        if(mat[i][j]%2==0)
            evenCount++;
    }
    arr[i][0] = i;
    arr[i][1] = evenCount;
}
for(i=0; i<r-1; i++){
    for(j=0; j<r-i-1; j++){
        if(arr[j][1] > arr[j+1][1]){
            swap(&arr[j][0],&arr[j+1][0]);
            swap(&arr[j][1],&arr[j+1][1]);
        }
    }
}
for(i=0; i<r;  i++){
    int row = arr[i][0];
    for(j=0; j<c; j++){
        cout << mat[row][j];
    }
    cout << endl;
}
}
