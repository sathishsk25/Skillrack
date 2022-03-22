#include<bits/stdc++.h>
using namespace std;

int main(){
int size,dataRate;
cin >> size >> dataRate;
int totalTime = ceil((size*1024.0)/dataRate);
int totalCost = 0;

while(totalTime>1000){
    totalCost += 3;
    totalTime--;
}
while(totalTime>500){
    totalCost += 2;
    totalTime--;
}
cout << totalCost + totalTime;
}
