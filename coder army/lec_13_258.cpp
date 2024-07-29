#include<iostream>
using namespace std;

class digit{
   
    //METHOD 1-------------------------------------------------------------------------------------------------------------------
    //public:
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

    //method 2-------------------------------------------------------------------------------------------------------------------------------
    //  int sum(int n){
    //     int sum=0;
    //     while(n){
    //         sum+=n%10;
    //         n=n/10;
    //     }
    //     return sum;
    // }
    // public:

    // int addDigit(int num){
    //    while(num/10){
    //     num=sum(num);
    //    }
    //    return num;
    // }

//Method 3-----------------------------------------------------------------------------------------------------------------------
    public:
    int addDigits(int num) {
        if (num == 0) return 0;
        if (num % 9 == 0) return 9;
        return num % 9;
    }
};
int main(){
    int n;
    cout<<"enter a number of ur choice"<<endl;
    cin>>n;
    digit D;
    int result=D.addDigits(n);
    cout<<"The sum of digits of number "<<n<<" is "<<result<<endl;
    return 0;
}