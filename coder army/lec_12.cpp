#include <iostream>
using namespace std;


int main() {
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    if (n == 0) {
        cout << "The binary format of 0 is 0" << endl;
        return 0;
    }

    //not using ^ beacuse this means xor ...we need to use exp for exponent
    int rem, q = n;
    int ans = 0;
    int place = 1;  // to keep track of place value in binary

    while (q != 0) {
        rem = q % 2;
        ans = rem * place + ans;
        q = q / 2;
        place = place * 10;  // move to the next place value in binary
    }

    cout << "The binary format of " << n << " is " << ans << endl;
    return 0;
}
