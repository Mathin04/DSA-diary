#include<iostream>
using namespace std;

int main(){
    //for(int i=10;i>=1;i--){
      //  cout<<i<<" ";
    //}
    //for(int i=1;i<=100;i=i+3){
        //cout<<i<<" ";
    //}


    //int n;
    //cin>>n;
    //int power;
    //cin>>power;
    //int num=n;
    //for(int i=1;i<=10;i++){
        //cout<<n <<"x" <<i <<"=" << n*i<<" ";
    //}
    //for(int i=1;i<power;i++)
    //num*=n;
    //cout<<num;

    //int sum=0;
    int n;
    cin>>n;
    //for(int i=0;i<=n;i++){
        //sum+=i*i;
       // cout<<sum;
   // }

   //int fact=1;
   //for(int i=1;i<=n;i++){
   // fact*=i;
    //cout<<fact;
   //}

//    if(n<2){
    // cout<<"Not prime";
    // return 0;
//    }
//    else{
    // for(int i=2;i<n;i++){
        // if(n%i==0){
            // cout<<"not prime";
            // return 0;
        // }
    // }
    // cout<<"Prime";
//    }

int last=0, pre=1,curr;
curr=last+pre;
for(int i=0;i<=n;i++){
    last=pre;
    pre=curr;
    curr=pre+curr;
    cout<<curr;
}

}