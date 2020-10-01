#include<iostream>

using namespace std;

int main(){
  long long n; cin>>n;
  long long monedas = 0;
  long long resto = 0;
  monedas += n/100;
  resto = n%100;
  monedas += resto/20;
  resto = resto%20;
  monedas += resto/10;
  resto = resto%10;
  monedas += resto/5;
  resto = resto%5;
  monedas += resto;
  cout<<monedas<<endl;
}