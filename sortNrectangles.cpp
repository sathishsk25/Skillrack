#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int N;
    cin >> N;
    int length[N],breath[N],area[N];
    for(int i=0; i<N; i++){
        cin >> breath[i] >> length[i];
        area[i] = breath[i]*length[i];
    }
    
    for(int i=0; i<N-1; i++){
        for(int j=0; j<N-1-i; j++){
            if(area[j]>area[j+1]){
                swap(length[j],length[j+1]);
                swap(breath[j],breath[j+1]);
                swap(area[j],area[j+1]);
            }
            if(area[j]==area[j+1]){
                if(length[j]>length[j+1]){
                    swap(length[j],length[j+1]);
                    swap(breath[j],breath[j+1]);
                    swap(area[j],area[j+1]);
                }
            }
        }
    }
    
    for(int i=0; i<N; i++)
    cout << breath[i]<< " "<< length[i] <<" "<<area[i] << endl; 
}
