#include<iostream>
#include<cmath>
using namespace std;

void armstrong_no(int num) {
    int original_num = num;
    int num_digits = 0;
    int sum = 0;

    // Count the number of digits in the number
    while (original_num != 0) {
        original_num /= 10;
        num_digits++;
    }

    original_num = num; // Reset the number to original value

    // Calculate the sum of the digits each raised to the power of num_digits
    while (original_num != 0) {
        int digit = original_num % 10;
        sum += pow(digit, num_digits);
        original_num /= 10;
    }

    // Check if the sum is equal to the original number
    if (sum == num) {
        cout << "The number " << num << " is an Armstrong number" << endl;
    } else {
        cout << "The number " << num << " is not an Armstrong number" << endl;
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    armstrong_no(n);
    return 0;
}
