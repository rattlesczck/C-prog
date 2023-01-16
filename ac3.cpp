#include<iostream>
using namespace std;

int main(){

    int a;
    a=69;
    cout<<"size of int "<<sizeof(a)<<" bytes"<<endl;

    float b;
    b=3.14;
    cout<<"size of float "<<sizeof(b)<<" bytes"<<endl;

    char c;
    cout<<"size of char "<<sizeof(c)<<" bytes"<<endl;

    bool d;
    cout<<"This is the size of bool: "<<sizeof(d)<<" bytes"<<endl;

    double f;
    cout<<"Size of double "<<sizeof(f)<<" bytes"<<endl;


    short int si;
    long int li;

    cout<<"size of Short int "<<sizeof(si)<<" bytes"<<endl;

    cout<<"Size of Long int "<<sizeof(li)<<" bytes"<<endl; 



     

    return 0;
}
