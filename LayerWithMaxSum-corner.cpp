#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
int n,i,j;
cin >> n;
int mat[n][n];

for(i=0; i<n; i++){
    for(j=0; j<n; j++){
        cin >> mat[i][j];
    }
}

int maxLayer,maxSum=0;
for(i=0; i<n/2; i++){
    int sum = mat[i][i] + mat[i][n-i-1] + mat[n-i-1][n-i-1] + mat[n-i-1][i];
    if(sum>maxSum) maxSum=sum, maxLayer=i;
}
if(n%2 != 0){
    if(mat[n/2][n/2] > maxSum) maxLayer = n/2;
}

for(i=maxLayer; i<n-maxLayer; i++){
    for(j=maxLayer; j<n-maxLayer; j++){
        if(i==maxLayer || i==n-1-maxLayer || j==maxLayer || j==n-1-maxLayer)
        cout << mat[i][j] << " ";
        else
        cout << "* ";
    }
    cout << "\n";
}
}
