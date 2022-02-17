#include <iostream>

using namespace std;

int main()
{
   int n,flag=0;
   cin >> n;
   int arr[n];
   
   for(int i=0; i<n; i++)
   cin >> arr[i];
   
   for(int i=0; i<=n-3; i++){
       for(int j=i+1; j<=n-2; j++){
           for(int k=j+1; k<=n-1; k++){
               if(arr[j]-arr[i] == arr[k]-arr[j]){
                   cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                   flag=1;
               }
           }
       }
   }
   if(flag==0)
   cout << "NO triplets";
    return 0;
}
