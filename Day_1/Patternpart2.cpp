#include<iostream>
using namespace std;

int main(){
    int row,col;
    
    //*
    //**
    //***
    //****
    //*****
    for(row=1;row<=5;row++){
        for(col=1;col<=row;col++){
            cout<<"*"<<" ";

        }
        cout<<endl;
    }

    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3 4 5

    for(row=1;row<=5;row++){
        for(col=1;col<=row;col++){
            cout<<col<<" ";
        }
        cout<<endl;
    }

    // 1
    // 2 2
    // 3 3 3
    // 4 4 4 4 
    // 5 5 5 5 5
    for(row=1;row<=5;row++){
        for(col=1;col<=row;col++){
            cout<<row<<" ";
        }
        cout<<endl;
    }

    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1 
    // 5 4 3 2 1
    for(row=1;row<=5;row++){
        for(col=row;col>=1;col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }

    // a
    // b b
    // c c c
    // d d d d 
    // e e e e e
    char name='a';
    for(row=1;row<=5;row++){
        for(col=1;col<=row;col++){
            cout<<name;
            
        }
        name++;
        cout<<endl;
    }
    //*****
    //****
    //***
    //**
    //*
    for(row=5;row>=1;row--){
        for(col=row;col>=1;col--){
            cout<<"*"<<" ";

        }
        cout<<endl;
    }
    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2 
    // 1

    for(row=1;row<=5;row++){
        for(col=1;col<=5-(row-1);col++){
            cout<<col<<" ";

        }
        cout<<endl;
    }
    // 5 
    // 5 4 
    // 5 4 3 
    // 5 4 3 2 
    // 5 4 3 2 1

    for(row=1;row<=5;row++){
        for(col=5;col>=5-row+1;col--){
            cout<<col<<" ";

        }
        cout<<endl;
    }



}