#include<iostream>
#include<cmath>
using namespace std;
typedef int coefficient;
typedef float roots;
typedef float discriminant;

int main(){
    coefficient a,b,c;
    roots r1,r2;
    discriminant d;
    
    cout<<"Enter coefficient of ax^2+bx+c"<<endl;
    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;
    cout<<"c:";
    cin>>c;
    
    d=b*b-4*a*c;
    
    if(d==0){
        cout<<"roots are real and equal";
        cout<<endl<<int(-b/(2*a));
    }
    
    else if(d>0){
        cout<<"roots real and unequal"<<endl;
        cout<<"r1="<<int(-b+sqrt(b*b-4*a*c))/2*a<<endl;
        cout<<"r2="<<int(-b-sqrt(b*b-4*a*c))/2*a<<endl;
    }
    
    else{
        cout<<"imaginary";
    }
}























