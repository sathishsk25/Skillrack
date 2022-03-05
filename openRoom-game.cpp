#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int arr[N];
    for(int i=0; i<N; i++)
    cin >> arr[i];
    int maxRooms=0;
    
    for(int i=0; i<N; i++){
        int startRoomKey = i;
        int temp  = i,c=0;
        while(1){
            int currRoomKey = arr[temp];
            temp = currRoomKey;
            c++;
            if(currRoomKey==startRoomKey) break;
        }
        if(maxRooms<c)
        maxRooms=c;
    }
    cout << maxRooms;
}
