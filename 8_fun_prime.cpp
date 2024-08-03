#include<iostream>
using namespace std;

bool prime(int n){
    if(n==2){
        return 1;
    }
    else{
        for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
    }
}
int main(){
    int n;
    cout<<"enter a number "<<endl;
    cin>>n;
    if(prime(n)){
        cout<<"the number is prime "<<endl;

    }
    else{
        cout<<"the number is not a prime"<<endl;
    }
    return 0;
}