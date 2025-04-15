#include<iostream>
using namespace std;
int main(){
    char c ;
    int a, b , s;
    cout<<"Enter the number 1st:- ";
    cin>>a;
    cout<<"Enter the number 2nd:- ";
    cin>>b;
    cout<<"Enter character A for Addition \n S for substraction \n M for multiplication \n D for Division ";
    cin>>c;
    if (c=='A'){
        s=a+b;
        cout<<"Addition is :- "<<s;
    }
    else if (c=='S'){
        s=a-b;
        cout<<"Substraction is :- "<<s;
    }
    else if (c=='M'){
        s=a*b;
        cout<<"Multiplication is :- "<<s;
    }
    else if (c=='D'){
        s=a+b;
        cout<<"Division is :- "<<s;
    }
    else{
        cout<<"You select wrong Charcter ";
    }
    return 0;
}