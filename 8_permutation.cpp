#include<iostream>
using namespace std;

int factorial(int n){
    int mul=1;
    for(int i=1;i<=n;i++){
        mul*=i;
    }
    return mul;
}

int permutation(int n, int r){
    int nCr=factorial(n)/(factorial(r)*factorial(n-r));
    return nCr;
}

int main() {
    int n,r;
    cout<<"enter  number for nCr"<<endl;
    cin>>n>>r;
    int result=permutation(n, r);
    cout<<" the permutation ie nCr is "<<result<<endl;
    return 0;
}