#include <bits/stdc++.h>
using namespace std;
int Knapsack(int wt[], int val[], int W, int n){
int A[n+1][W+1];

for(int i=0;i<n+1;i++){
for(int j=0;j<W+1;j++){
if(i==0 || j==0){
A[i][j]=0;
}}}
  for(int i=1;i<n+1;i++){
for(int j=1;j<W+1;j++){
if(j>=wt[i-1]){
 A[i][j]=max(val[i-1]+A[i-1][j-wt[i-1]],A[i-1][j]);
}
else if(j<wt[i-1])
   A[i][j]=A[i-1][j];
}}
return A[n][W];
}


int main(){
    int weight[5]= {10,20,30,40,50};
    int value[5]= {50,40,30,20,10};
    int x=Knapsack(weight,value,80,5);
    cout<<x<<endl;
}
