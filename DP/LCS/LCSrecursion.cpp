#include<bits/stdc++.h>
using namespace std;

int LCS(string x, string y, int n, int m){
if(n==0||m==0){
return 0;
}
  if(x[n-1]==y[m-1])
    return 1+ LCS(x,y,n-1,m-1);
  else 
    return max(LCS(x,y,n-1,m),LCS(x,y,n,m-1));
}

int main(){
string x = "abcd";
string y= "bc";
int n=4;
  int m=3;
  int a= LCS (x,y,n,m);
  cout<<a;
}
