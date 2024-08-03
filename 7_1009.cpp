#include <iostream>
using namespace std;

int findComplement(int n){
    int m=n ;
    int mask=0;
    while(m){
        m=m>>1;
        mask=(mask<<1)|1;
    }
    int ans=(~n)&mask;
    return ans;
}

int main(){
    int n;
    cout<<"enter a number "<<endl;
    cin>>n;
    int result = findComplement(n);
    cout<<"comple of binary of "<<n<<" is "<<result<<endl;
    return 0;

}