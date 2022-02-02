#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int main(int argc, char** argv)
{
int arr[123];
for(int i=97; i<123; i++)
cin >> arr[i];

int minCost = INT_MAX;
for(int i=97; i<123; i++){
    int cost = 0;
    for(int j=97; j<123; j++){
        if(i != j) 
        cost += abs(j-i)*arr[j];
    }
    if(cost < minCost) minCost = cost;
}
cout << minCost;
}
