#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int stPoint[n];
    int edPoint[n];
    
    for(int i=0; i<n; i++)
    cin >> stPoint[i] >> edPoint[i];
    
    int ep=edPoint[0];
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(ep==stPoint[j] && stPoint[j]!=1000){
                ep=edPoint[j];
                stPoint[j]=1000;
                edPoint[j]=1000;
                break;
            }
        }
    }
    
    for(int i=0; i<n; i++){
        if(stPoint[i]!=1000) cout << "NO", exit(0);
    }
    cout << "YES";
}
