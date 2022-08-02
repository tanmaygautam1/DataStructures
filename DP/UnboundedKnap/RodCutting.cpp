#include <bits/stdc++.h>
using namespace std;

int maxProfit(int length[], int price[], int lenn, int n){
int A[n+1][lenn+1]
for(int i=0;i<n+1;i++){
for(int j=0;j<lenn+1;j++){
if(i==0 || j==0){
A[i][j]=0;
}}}
  for(int i=1;i<n+1;i++){
for(int j=1;j<lenn+1;j++){
if(j>=length[i-1]){
 A[i][j]=max(price[i-1]+A[i][j-length[i-1]],A[i-1][j]);
}
else if(j<length[i-1])
   A[i][j]=A[i-1][j];
}}
return A[n][W];}
