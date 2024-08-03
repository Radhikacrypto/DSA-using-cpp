#include<iostream>
using namespace std;

//int main() {
    //CALCULATOR----------------------------------------------------------------------------------------------------------
    // int a, b;
    // cout << "Enter two numbers: " << endl;
    // cin >> a >> b;
    // char op;
    // cout << "Enter the operator to perform the particular operation: " << endl;
    // cin >> op;
    // int ans;
    
    // switch (op) {
    //     case '+':
    //         ans = a + b;
    //         break;
    //     case '-':
    //         ans = a - b;
    //         break;
    //     case '*':
    //         ans = a * b;
    //         break;
    //     case '/':
    //         if (b != 0) {
    //             ans = a / b;
    //         } else {
    //             cout << "Error: Division by zero is not allowed." << endl;
    //             return 1; // Exit the program with an error code
    //         }
    //         break;
    //     default:
    //         cout << "You have entered a wrong operator." << endl;
    //         return 1; // Exit the program with an error code
    // }
    
    // cout << "The answer is: " << ans << " for the operation " << op << endl;
    // return 0;

    //TASk 2 money dividing in notes ...how many notes needed -----------------------------------------------------------------
//     void notes(int money) {
//          int no_100=money/100;
//     int rem=money%100;
//     int no_50= rem/50;
//     rem = rem%50;
//     int no_20=rem/20;
//     rem=rem%20;
//     int no_1= rem/1;
//     cout<<" 100 rs note = "<<no_100<<endl;
//     cout<<"50 rs note = "<<no_50<<endl;
//     cout<<"20 rs note "<<no_20<<endl;
//     cout<<"1 rs coin "<<no_1<<endl;
//     }
//     int main(){
//     int money;
//     cout<<"enter the money"<<endl;
//     cin>>money;
//    notes(money);
//     return 0;
// }



// USING SWITCH STATEMENT FOR TASK 2 -----------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

void notes(int money) {
    int no_100 = 0, no_50 = 0, no_20 = 0, no_1 = 0;
    switch (money / 100) {
        case 0:
            break;
        default:
            no_100 = money / 100;
            money %= 100;
    }
    switch (money / 50) {
        case 0:
            break;
        default:
            no_50 = money / 50;
            money %= 50;
    }
    switch (money / 20) {
        case 0:
            break;
        default:
            no_20 = money / 20;
            money %= 20;
    }
    switch (money / 1) {
        case 0:
            break;
        default:
            no_1 = money;
    }

    cout << "100 rs note = " << no_100 << endl;
    cout << "50 rs note = " << no_50 << endl;
    cout << "20 rs note = " << no_20 << endl;
    cout << "1 rs coin = " << no_1 << endl;
}

int main() {
    int money;
    cout << "Enter the money" << endl;
    cin >> money;
    notes(money);
    return 0;
}
