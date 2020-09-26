#include<iostream>
#include<vector>
#include <iomanip>
#include<algorithm>

using namespace std;

int main(){
  cout<<fixed<<setprecision(9);
  double l,n;
  cin>>l>>n;
  vector <double> num;
  double e;
  for(int i=0;i<l;i++){
    cin>>e;
    num.push_back(e);
  }
  sort(num.begin(),num.end());
  double ans = max(num[0],n-num[num.size()-1]);
  double rep = -1;
  for(int i=0;i<num.size() -1;i++){
    if(rep < (num[i+1]-num[i])) rep = (num[i+1]-num[i]);
  }
  cout<<max(ans,rep/2.0)<<endl;
}