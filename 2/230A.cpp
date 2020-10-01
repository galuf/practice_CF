#include<iostream>
#include <utility>
#include<bits/stdc++.h>

using namespace std;

int main(){

  int s,n;
  cin>>s>>n;
  pair<int,int> dragon;
  vector<pair<int,int>> v;

  bool gana = true;
  for(int i=0;i<n;i++){
    cin>>dragon.first>>dragon.second;
    v.push_back(dragon);
  }
  sort(v.begin(),v.end());
  for(int i=0;i<n;i++){
    if(s>v[i].first) s+=v[i].second;
    else{
      gana = false;
      break;
    }
  }
  if(gana) cout<<"YES"<<endl;
  else{
    cout<<"NO"<<endl;
  }
}