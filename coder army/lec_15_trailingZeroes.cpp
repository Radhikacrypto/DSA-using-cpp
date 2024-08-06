#include<iostream>
#include<cmath>
using namespace std;


class solution {
public:
// int trailingZeroes(int n){
//     int zeroes=0;
//     while(n>5){
//         zeroes+=n/5;
//         n=n/5;
//     }
//     return zeroes;
// }
int zeroes = 0;
        int i = 5;
        while (n / i >= 1) {
            zeroes += n / i;
            i *= 5;
        }
    
};

int main() {
    int n;
    cout << "Enter a number " << endl;
    cin >> n;
    solution s;
    int result = s.trailingZeroes(n);
    cout << "Number of trailing zeroes is " << result << endl;

    return 0;
}
