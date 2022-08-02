#include<bits/stdc++.h>
using namespace std;

int MaxCoin(int coin[], int sum, int n){
int A[n+1][sum+1];
  for(int i=0; i<n+1;i++){
  for(int j=0; j<sum+1;j++){
  if(i==0)
    A[i][j]=0;
    if(j==0)
      A[i][j]=1;
  }}
  for(int i=1;i<n+1;i++){
  for(int j=1;j<sum+1;j++){
   if(coin[i-1]<=sum)
     A[i][j]= A[i][j-coin[i-1]] + A[i-1][j];
   else
     A[i][j]=A[i-1][j];
  }}
  return A[n][sum];
}
int main(){
    int coin[3]={1,2};
    int sum = 4;
    int x = MaxCoin(coin, sum, 2);
    cout<<x;
}
