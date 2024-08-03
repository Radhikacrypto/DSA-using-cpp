#include<iostream>
using namespace std;
int checkbit( uint32_t a , uint32_t b){
    int sum=0;
    while(a | b){
        if(a^0&b^0){
            sum+=2;
        }
        else if(a^0|b^0){
            sum+=1;
        }

        a>>1;
        b>>1;
    }
    return sum;
}
int main(){
    int a,b;
    cout<<"enter the two numbers"<<endl;
    cin>>a>>b;
    cout<<" no of bits in both is "<<checkbit(a,b)<<endl;
    return 0;
}