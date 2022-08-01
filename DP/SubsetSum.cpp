#include <bits/stdc++.h>
using namespace std;

bool Sub(int arr[], int sum, int n){
int A[n+1][sum+1];
  for(int i=0;i<n+1;i++){
    for(int j=0;j<sum+1;j++){
    if(i==0)
      A[i][j]=false;
      if(j==0)
      A[i][j]=true;
    }
}
   for(int i=1;i<n+1;i++){
    for(int j=1;j<sum+1;j++){
    if(arr[i-1]<=sum)
      A[i][j]= (A[i-1][j-arr[i-1]] or A[i-1][j]);
     else
      A[i][j]= A[i-1][j];
    }}
  return A[n][sum];
}

int main(){
    int array[5]={1,4,5,2,6};
    int sum = 9;
    if (Sub(array, sum, 5) == true)
         cout <<"Found a subset with given sum";
    else
        cout <<"No subset with given sum";

}
