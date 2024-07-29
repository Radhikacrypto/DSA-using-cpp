#include<iostream>
using namespace std;

int BinaryToDecimal(int n){
    int place=1;
    int ans=0;
    while(n!=0){
        int rem=n%10;
        n=n/10;
        ans=rem*place+ans;
        place=place*2;
    }

    return ans;
} 

int DecimalToBinary(int n){
    int place=1;
    int ans=0;
    while(n){
        int rem=n%2;
        n=n/2;
        ans=rem*place+ans;
        place*=10;
    }

    return ans;
}

int octToDecimal(int n){
    int place =1;
    int ans=0;
    while(n){
        int rem=n%10;
        n=n/10;
        ans=rem*place+ans;
        place*=8;
    }
    return ans;
}
int DecimalToOct(int n){
    int place=1;
    int ans=0;
    while(n){
        int rem=n%8;
        n=n/8;
        ans=rem*place+ans;
        place*=10;
    }

    return ans;
}
int octToBinary(int n){
   int ans= octToDecimal(n);
   ans= DecimalToBinary(ans);
   return ans;
}
int BinaryToOct (int n){
    int ans=BinaryToDecimal(n);
    ans = DecimalToOct(ans);
    return ans;
}
int main(){
    int n;
    cout<<"enter a number to be converted from to decimal"<<endl;
    cin>>n;
    int decimal=BinaryToOct(n);
    cout<<"the result is : "<<decimal<<endl;

return 0;
}