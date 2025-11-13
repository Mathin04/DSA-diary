#include<iostream>
using namespace std;


int main(){
    int i,j,k,l;

    //     *
    //   * * *
     //* * * * *
//   * * * * * * *
// * * * * * * * * *
    for(i=1;i<=5;i++){
        for(j=1;j<=5-i;j++){
            cout<<"  ";
        }
        for(k=1;k<=2*i-1;k++){
            cout<<"* ";
        }
        cout<<endl;
    }

    //     1
    //   1 2 1
    // 1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1

    for(i=1;i<=5;i++){
        for(j=1;j<=5-i;j++){
            cout<<"  ";
        }
        for(k=1;k<=i;k++){
            cout<<k<<" ";
        }
        for(l=i-1;l>=1;l--)
            cout<<l<<" ";
        cout<<endl;
    }
    
    
    // * * * * * * * * *
    //   * * * * * * *
    //     * * * * *
    //       * * *
        //     *

    for(i=5;i>=1;i--){
        for(j=1;j<=5-i;j++)
            cout<<"  ";
        for(k=1;k<=2*i-1;k++)
            cout<<"*"<<" ";
        
        cout<<endl;

    }

    for(i=4;i>=1;i--){
        for(j=1;j<=i;j++)
            cout<<"*"<<" ";
        for(k=1;k<=8-2*i;k++)
            cout<<"  ";
        for(j=1;j<=i;j++)
            cout<<"*"<<" ";
            cout<<endl;
        
    }
    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++)
            cout<<"*"<<" ";
        for(k=1;k<=8-2*i;k++)
            cout<<"  ";
        for(j=1;j<=i;j++)
            cout<<"*"<<" ";
            cout<<endl;
            }
}
    


