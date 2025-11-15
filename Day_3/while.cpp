#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int i=1;
    // printing a table
     while(i<=10){
         cout<<n<<"x "<<i <<"= "<<n*i<<" ";
         i++;
        
     }

    // factors of a number
     while(i<=n){
         if(n%i==0){
             cout<<i<<" ";
             i++;
         }
         cout<<endl;
     }


    //  Printing even numbers
    while(i<=n){
        if(i%2==0){
            cout<<i<<" ";
            i++;
        }
    }

    // printing odd numbers
     while(i<=n){
         if(n%2==1){
             cout<<i<<" ";
             i++;
         }
         cout<<endl;
     }
}