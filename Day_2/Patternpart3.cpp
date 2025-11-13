#include<iostream>
using namespace std;

int main(){
    int row, col, k;
    //int n;
    //cin>>n;
    //        *
    //      * *
    //     * * *
    //   * * * * 
    // * * * * * 

    for(row=1;row<=5;row++){
        for(col=1;col<=5-row;col++){
            cout<<"  ";
        }
        for(k=1;k<=row;k++){
            cout<<"* ";

        }
        cout<<endl;
    }

    //         1
    //       2 2
    //     3 3 3
    //   4 4 4 4 
    // 5 5 5 5 5 

    for(row=1;row<=5;row++){
        for(col=1;col<=5-row;col++){
            cout<<"  ";
        }
        for(k=1;k<=row;k++){
            cout<<row<<" ";
        }
        cout<<endl;
    }
    //        1
    //      1 2
    //    1 2 3
    //  1 2 3 4
    //1 2 3 4 5

    for(row=1;row<=5;row++){
        for(col=1;col<=5-row;col++){
            cout<<"  ";
        }
        for(k=1;k<=row;k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }

    // char name='a';
    //         A
    //       A B
    //     A B C
    //   A B C D
    // A B C D E
    for(row=1;row<=5;row++){
        for(col=1;col<=5-row;col++){
            cout<<"  ";
        }
        for(char c='A';c<='A'+row-1;c++){
            cout<<c<<" ";
        }
        
        cout<<endl;
    }

    //     1
    //   2 1
    // 3 2 1
//   4 3 2 1
// 5 4 3 2 1 
    for(row=1;row<=5;row++){
        for(col=1;col<=5-row;col++){
            cout<<"  ";
        }
        for(k=row;k>=1;k--){
            cout<<k<<" ";

        }
        cout<<endl;
    }

}