#include <iostream>
using namespace std;

int findComplement(int num){
    int m=num ;
    int mask=0;
    while(m){
        m=m>>1;
        mask=(mask<<1)|1;
    }
    int ans=(~num)&mask;
    return ans;
}

int main(){
    int num;
    cout<<"enter a number "<<endl;
    cin>>num;
    int result = findComplement(num);
    cout<<"comple of binary of "<<num<<" is "<<result<<endl;
    return 0;

}