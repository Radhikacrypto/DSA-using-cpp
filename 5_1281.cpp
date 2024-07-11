#include<iostream>
using namespace std;
int productSum (int n){
    int result;
     int product=1;
      int sum =0;
    while(n!=0){
       
        product*=n%10;
       
        sum+=n%10;
        n=n/10;
    }
    result=product-sum;
    return result;
}
 int main(){
    int n ;
    cout<<"enter a number"<<endl;
    cin>>n;
    int result=productSum(n);

    cout<<"the final answer is "<<result<<endl;

    return 0;

 }