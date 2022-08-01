#include <bits/stdc++.h>
using namespace std;

int MinSub(int arr[], int n){
    int sum=0;
    for(int i=0;i<n;i++)
    sum=sum+arr[i];
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
    vector<int> v;
  
    for (int j = sum/2; j>= 0; j--){
    
       if(A[n][j]==true)
        v.push_back(j);}
        int mn=INT_MAX;
    for(int i=0;i<v.size();i++){
        mn=min(mn,sum-2*v[i]);
    }
    return mn;
}


int main(){
    int array[5]={1,10,2,4,6};
    int sum = 9;
    int x = MinSub(array,5);
    cout<<x;

}
