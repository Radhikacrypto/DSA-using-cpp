//LEETCODE QUESTION 191 

#include<iostream>
using namespace std;
//speed =2ms
int hammingBit(int n){
    int q=n, rem, num=0;
    while(q!=0){
        rem=q%2;
        q=q/2;
        if(rem==1){
            num+=1;
        }
    }
    return num;
}
//another way to do same thing 
//speed =0ms
class solution {
    public:
    int hammingWeight (uint32_t n){
        int count=0;
        while (n!=0)
        {
            if(n&1){
                count++;
            }
            n=n>>1;
        }
        return count;
    }
};

int main(){
    int n, setBits;
    cout<<"enter a number to find number of bits "<<endl;
    cin>>n;
    setBits=hammingBit(n);
    cout<<endl<<"number of bits in "<<n<<" is "<<setBits<<endl;

    solution s1;
    int result=s1.hammingWeight(n);
    cout<<"the result is using class "<<result;

    
    return 0;
}