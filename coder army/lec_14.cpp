#include<iostream>
using namespace std;
char conversion(char c){
    int num=int(c);
     num=num-32;
    return char(num);
}

// Method 2------------------------------------------------------------------------------------------------------------------
char convert(char c){
    char ans=(c-'a')+'A';
    return ans;
}
int main(){
    char c;
    cout<<"enter a character"<<endl;
    cin>>c;
    cout<<"the capitalize form of "<<c<<" is "<<convert(c)<<endl;
    return 0;    
}