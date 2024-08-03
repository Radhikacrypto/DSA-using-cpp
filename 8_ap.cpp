#include<iostream>
using namespace std;

int ap(int n){
    int r= (3*n)+7;
    return r;
}

void fabonacci(int n){
    int a=0;
    int b=1;
    cout<<a<<" ";
    cout<<b<<" ";
    for(int i=2;i<n;i++){
      int  c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }

}
int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    cout<<"the result is "<<ap(n)<<endl;

    fabonacci(n);

    return 0;
}