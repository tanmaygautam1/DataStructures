#include <bits/stdc++.h>
using namespace std;
int LCS(string x, string y, int m, int n){
int A[m+1][n+1];
for(int i=0;i<m+1;i++){
    for(int j=0;j<m+1;j++){
        if(i==0 || j==0){
            A[i][j]=0;
        }
    }
}
for(int i=1;i<m+1;i++){
    for(int j=1;j<n+1;j++){
        if(x[i-1]==y[j-1]){
            A[i][j]= 1+A[i-1][j-1];}
        else
        A[i][j]= max(A[i-1][j], A[i][j-1]);
        
    }}

return A[m][n];}

int main(){
    string x="abcd";
    string y="abc";
    int m=4;
    int n=3;
int a= LCS(x,y,m,n);
cout<<a;
}
 
