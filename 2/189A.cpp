#include<iostream>

using namespace std;

int dp[1000005];

int main(){
  int n,a,b,c;
  cin>>n>>a>>b>>c;
  dp[a] = 1; dp[b]=1; dp[c]=1;
  for(int i=0;i<n;i++){
    if(dp[i]==0) continue;
    dp[i+a] = max(dp[i+a],dp[i]+1);
    dp[i+b] = max(dp[i+b],dp[i]+1);
    dp[i+c] = max(dp[i+c],dp[i]+1);
  }
  cout<<dp[n]<<endl;
}