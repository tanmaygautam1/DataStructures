#include<bits/stdc++.h>
using namespace std;

int Knapsack(int wt[], int val[], int W, int n){
int a[n+1][W+1];
  memset(a,-1,sizeof(a));
  if(n==0 || W==0)
    return 0 ;
  if(a[n][W]!=-1)
    return a[n][W];
  if(wt[n-1]<=W){
    return a[n][W]=max(val[n-1]+Knapsack(wt,val,W-wt[n-1],n-1), Knapsack(wt,val,W,n-1));}
  else if(wt[n-1]>W)                               
  return a[n][W]=Knapsack(wt,val, W, n-1);
    
  }


int main(){
    int weight[5]= {10,20,30,40,50};
    int value[5]= {50,40,30,20,1};
    int x=Knapsack(weight,value,80,5);
    cout<<x<<endl;
}
