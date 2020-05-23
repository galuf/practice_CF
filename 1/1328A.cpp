#include<iostream>
using namespace std;

int main(){
  int t; cin>>t;

  long long a[t][3];
  for(int i=0; i<t ; i++){
    cin>>a[i][0]>>a[i][1];
    if(a[i][0]%a[i][1]!= 0){
      a[i][2] = ((a[i][0]/a[i][1]) +1)*a[i][1] - a[i][0];    
    }else{
      a[i][2] = 0;
    }
  }
  for(int i=0; i<t;i++){
    cout<<a[i][2]<<endl;
  }
}