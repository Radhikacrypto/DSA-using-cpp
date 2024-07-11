#include<iostream>
 using namespace std;

 int main(){
    int n; 
    cout<<"enter a number "<<endl;
    cin>>n;

    //FIBONACCI SERIES --------------------------------------------------------------------------------------------------------------------------------
    // int x=0;
    // int y=1;
    // cout<<x<<" ";
    // cout<<y<<" ";

    // for(int i=2; i<n;i++){
    //     int sum= x+y;
    //     cout<<sum<<" ";
    //     x=y;
    //     y=sum;
    // }

    //prime --------------------------------------------------------------------------------------------------------------------------
    // int prime =0;

    // for(int i=2;i<n;i++){
    //     if(n%i==0){
    //         cout<<"it is divisible by "<<i<<endl;
    //        prime =1;
    //         break;

    //     }
       
    // }
    // if(prime==1){
    //     cout<<"the number you enterd is not prime "<<endl;
    // }
    // else{
    //     cout<<" the number "<<n<<" is a Prime Number "<<endl;
    // }

    //techinal question 1-------------------------------------------------------------
      // FINDING OUTPUT 

    // for (int i = 0; i <=5; i++)
    // {
    //    cout<<i<<" ";
    //    i++;
    // }
    
    //TECHNICAL QUESTION 2 --------------------------------------------------------------------------------

    // for (int i = 0; i <=5; i--)
    // {
    //    cout<<i<<" ";
    //    i++;
    // }

    //  QUESTION 3 ---------------------------------------------------------------------
    //SOLVED WRONGLY
    //explain the output

     for (int i = 0; i <=15; i+=2)
    {
       cout<<i<<" ";
       if(i&1){
        continue;
       }
       i++;
    }


    
    return 0;
 }