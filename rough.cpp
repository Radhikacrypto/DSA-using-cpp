#include<iostream>
#include<bitset>
using namespace std;
int main(){
    int a=5;
    int b=(~a);
    bitset<32> c(b);
  cout<<c;

    return 0;
}