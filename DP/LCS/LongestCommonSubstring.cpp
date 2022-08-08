#include <bits/stdc++.h>
using namespace std;

int Count(string x,string y, int m, int n){
int A[m+1][n+1];
for(int i=0; i<m+1;i++){
for(int j=0;j<n+1;j++){
if(i==0 && j==0){
A[i][j]=0;
}}}
int max=0;
  for(int i=1;i<m+1;i++){
    for(int j=1;j<n+1;j++){
        
        if(x[i-1]==y[j-1]){
            A[i][j]= 1+A[i-1][j-1];
             if (A[i][j] > max) {
                        max = A[i][j];
                    }
        }
        else
        A[i][j]= 0;
        
    }}

return max;
}



int main(){
string x= "abdefg";
string y="abedfg";
int m=6;
  int n=6;
  int a=Count(x,y,m,n);
  cout<<a;
}
