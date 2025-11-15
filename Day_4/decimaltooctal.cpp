#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0,rem,mul=1;
    while(n>0){
        rem=n%8;
        n=n/8;
        ans=rem*mul+ans;
        mul*=10;
    }
    cout<<ans;
}