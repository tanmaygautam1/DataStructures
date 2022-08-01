#include <bits/stdc++.h>
using namespace std;

bool EqualSum(int arr[], int n){
  int sum=0;
for(int i=0;i<n;i++){
sum=sum+arr[i];
}
  int Sum=sum/2;
if(sum%2!=0)
  return false;
  
else{
  int A[n+1][Sum+1];
for(int i=0; i<n+1;i++){
  for(int j=0;j<Sum+1;j++){
  if(i==0){
  A[i][j]=false;}
  if(j==0){
  A[i][j]=true;}}}
  for(int i=1; i<n+1;i++){
  for(int j=1;j<Sum+1;j++){
  if(arr[i-1]<=Sum){
  A[i][j]=A[i-1][j-arr[i-1]] || A[i-1][j];}
  else
  A[i][j]=A[i-1][j];
  }}
  return A[n][Sum];
  
}
  
  }
  int main()
{
    int arr[] = { 3, 1, 1, 2, 2, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
     
    if (EqualSum(arr, n) == true)
        cout << "Can be divided into two subsets of equal "
                "sum";
    else
        cout << "Can not be divided into"
             << " two subsets of equal sum";
    return 0;
}
