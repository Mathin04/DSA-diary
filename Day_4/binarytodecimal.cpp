#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0,rem,mul=1;
    while(n>0){
        rem=n%10;
        n=n/10;
        ans=rem*mul+ans;
        mul*=2;
    }
    cout<<ans;
}