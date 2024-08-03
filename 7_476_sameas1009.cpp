#include<iostream>
#include<cmath>
using namespace std;
class solution {
    public:
    int findComplementofBit(int num){
     
        int noOfBits=(log2(num)) +1;
        for(int i=0;i< noOfBits;i++){
            num^=(1<<i);
        }
      return num; 
    }
};
int main(){
    int n;
    cout<<"enter a number "<<endl;
    cin>>n;
    solution s;
    int result = s.findComplementofBit(n);
    cout<<"comple of binary of "<<n<<" is "<<result<<endl;
    return 0;

}