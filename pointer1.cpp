#include<iostream>
using namespace std;

int main()

{
    int c;
    int a;
    int b;
    int *p;
    int *q;


    p=&a;
    q=&b;

    a=2;
    b=5;

    c=  *p+*q;  

    // cout<<"The value of a is (from the actual variable type) "<<a<<endl;
    // cout<<"the value of a from the pointer using  *(astriex/ indirection operator) "<<*p<<endl;

    cout<<"the value of c is : "<<c;
    cout<<"the address of a is "<<&a<<"the value of the pointer is"<<p;
    return 0;
}