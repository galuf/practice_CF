#include<iostream>
#include<cstring>
#include <utility>
#include<bits/stdc++.h>

using namespace std;

int main(){

  map <string,int> mapa;

  int n,cont=0; cin>>n;
  string s;
  string res[n];
  for(int i=0;i<n;i++){
    cin>>s;
    mapa[s]++;
    if(mapa[s]==1)
    res[i] = "Ok";
    else{
      res[i] = s+to_string(mapa[s]-1);
    }
  }
  for(int i=0;i<n;i++){
    cout<<res[i]<<endl;
  }
}