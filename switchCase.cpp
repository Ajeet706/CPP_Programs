#include<iostream>
using namespace std;
int main(){
    char c ;
    int a, b , s;
    cout<<"Enter the number 1st:- ";
    cin>>a;
    cout<<"Enter the number 2nd:- ";
    cin>>b;
    cout<<"Enter character \n + for Addition \n - for substraction \n * for multiplication \n / for Division ";
    cin>>c;
    switch(c){
    case '+':
        s=a+b;
        cout<<"Addition is :- "<<s;
        break;
    
    case '-':
        s=a-b;
        cout<<"Substraction is :- "<<s;
        break;
    case '*':
        s=a*b;
        cout<<"Multiplication is :- "<<s;
        break;
    
    case '/':
        s=a+b;
        cout<<"Division is :- "<<s;
        break;
    default:
        cout<<"You select wrong Charcter ";
    }
    return 0;
}