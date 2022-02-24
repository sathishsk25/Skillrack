#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv){
int N;
cin >> N;
int chairs[N],temp[N];
for(int i=0; i<N; i++){
    cin >> chairs[i];
    temp[i]=chairs[i];
}
int days=0,healthyPerson=0;
while(1){
    int spreaded=0;
for(int i=0; i<N; i++){
    if(chairs[i]==2){
    if(i-1>=0 && temp[i-1]==1){
        temp[i-1]=2;
        spreaded++;
    }
    if(i+1<=N && temp[i+1]==1){
        temp[i+1] = 2;
        spreaded++;
    }
    }
}
for(int i=0; i<N; i++)
chairs[i] = temp[i];

    days++;
    if(spreaded==0)
    break;
}
for(int i=0; i<N; i++){
    if(chairs[i]==1)
    healthyPerson++;
}
cout << days << " " << healthyPerson;
}
