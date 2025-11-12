#include<iostream>
using namespace std;

int main(){
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    int n;
     cin>>n;
     for(int i=1;i<=n;i++){
         for(int j=1;j<=n;j++){
             cout<<"*"<<" ";
         }
         cout<<endl;
     }

    //  10 10 10 10 10
    //  10 10 10 10 10
    //  10 10 10 10 10
    //  10 10 10 10 10

    int row;
    int col;
     for(row=1;row<=4;row++){
         for(col=1;col<=5;col++){
             cout<<"10"<<" ";
         }
         cout<<endl;
     }

    //11111
    //22222
    //33333
    //44444
    //55555  

    for(row=1;row<=5;row++){
        for(col=1;col<=5;col++){
            cout<<row<<" ";
        }
        cout<<endl;
    }

    //12345
    //12345
    //12345
    //12345
    //12345

    for(row=1;row<=5;row++){
        for(col=1;col<=5;col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }

    //54321
    //54321
    //54321
    //54321
    //54321

    for( row=1;row<=5;row++){
        for(col=5;col>=1;col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }

    //1 4 9 16 25
    //1 4 9 16 25
    //1 4 9 16 25
    //1 4 9 16 25
    //1 4 9 16 25

    for(row=1;row<=5;row++){
        for(col=1;col<=5;col++){
            cout<<col*col<<" ";
        }
        cout<<endl;
    }

    //a a a a a 
    //b b b b b
    //c c c c c
    //d d d d d

    char c=97;
    for(row=1;row<=5;row++){
        for(col=1;col<=5;col++){

            cout<<c<<" ";
        }
        c++;
        cout<<endl;
    }

    //a b c d e
    //a b c d e
    //a b c d e
    //a b c d e
    //a b c d e
    
    for(row=1;row<=5;row++){
        for(char name='a';name<='e';name++){
            cout<<name<<" ";
            
        }
        cout<<endl;
    }

    // 1 2 3 4 5
    // 6 7 8 9 10
    // 11 12 13 14 15
    // 16 17 18 19 20
    // 21 22 23 24 25

    int count=1;
    for(row=1;row<=5;row++){
        for(col=1;col<=5;col++){
            cout<<count<<" ";
            count+=1;
            
        }
        cout<<endl;
    }
}