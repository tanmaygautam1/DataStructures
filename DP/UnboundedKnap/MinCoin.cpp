#include <bits/stdc++.h>
using namespace std;

int MinCoin(int coins[], int n, int sum){
int A[n+1][sum+1];
  for(int i=0; i<n+1;i++){
  for (int j=0; j<sum+1;j++){
  if(j==0){A[i][j]=0;}
    if(i==0){A[i][j]=INT_MAX-1;}
  }}
  for(int i=1,j=1;j<sum+1;j++){
  if(j%coins[0]==0)
    A[i][j]=j/coins[0];
  else
    A[i][j]=INT_MAX-1;}
for(int i=2;i<n+1;i++){
  for(int j=1;j<sum+1;j++){
    if(coins[i-1]<=sum){
    A[i][j]= min(1+A[i][j-coins[i-1]],A[i-1][j]);}
    else
      A[i][j]=A[i-1][j];
  }}
  return A[n][sum];
}

int main(){
    int coins[3]={1,2,3};
    int sum=45;
    int x = MinCoin(coins,3,sum);
    cout<<x;
}
