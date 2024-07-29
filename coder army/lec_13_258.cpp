#include<iostream>
using namespace std;

class digit{
    int sum(int n){
        int sum=0;
        while(n){
            sum+=n%10;
            n=n/10;
        }
        return sum;
    }
    public:
    // int addDigit(int n){
    //    int ans=0;
    //     while(n){
    //         int rem = n%10;
    //         n/=10;
    //         ans+=rem;
    //     }
    //     if(ans/10==0){
    //         return ans;
    //     }
    //     else{
    //          retrun addDigit(ans);
    //     }
       
    // }

    int addDigit(int num){
       while(num/10){
        num=sum(num);
       }
       return num;
    }
};
int main(){
    int n;
    cout<<"enter a number of ur choice"<<endl;
    cin>>n;
    digit D;
    int result=D.addDigit(n);
    cout<<"The sum of digits of number "<<n<<" is "<<result<<endl;
    return 0;
}