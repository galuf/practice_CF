#include<iostream>

using namespace std;

int main(){
  int t;
  cin>>t;
  int num[t], res[t];
  for(int i=0;i<t;i++){
    cin>>num[i];
    res[i]=num[i] - (int)((num[i]/2) +1);
  }

  for(int i=0;i<t;i++){
    cout<<res[i]<<endl;
  }

}