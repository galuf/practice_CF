#include <iostream>
#include <map>

using namespace std;

int main(){
  int n, suma = 0; cin>>n; string a[n];
  map<char,int> figure;
  figure['T'] = 4; figure['C'] = 6; figure['O'] = 8; figure['D'] = 12; figure['I'] = 20;
  for(int i = 0 ; i < n ; i++){
    cin>>a[i];
    suma += figure.find(a[i][0])->second;
  }
  cout<<suma;
}