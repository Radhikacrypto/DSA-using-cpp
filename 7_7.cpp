//leetcode question 7 reverse integer
#include<iostream>
#include<cmath>
#include<climits> // to use constants like int_max and int_min
using namespace std;
class Solution{
   public:
    int reverse(int32_t n){
        if(n<pow(2,31)){
            int ans=0;
    while(n){
        int rem=n%10;
        n=n/10;
        if(ans>(INT_MAX/10) || ans<(INT_MIN/10)){
            return 0;
        }
        ans=ans*10+rem;
    }
    return ans;
        }
        else{
            return 0;
        }
}


};

int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    Solution s;
    int reverse= s.reverse(n);
    cout<<"the reverse of digit "<<n<<" is "<<reverse<<endl;

    return 0;

}

// Notes
// -> we have used int32_t for signed int i.e we need to include -ve int as well 
//if we are using if case of int_min and int_mas we can skip using if(n<pow(2,31 ))and we can also skip using int32_t but it might increase space/memory complexity