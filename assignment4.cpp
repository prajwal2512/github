#include<iostream>
using namespace std;
class Complex{
    public:
    float real;
    float imag;
    Complex(){
        real=0;
        imag=0;
    }
    void insert(){
        cout<<"Enter the real part:\n";
        cin>>real;
        cout<<"Enter the complex part:\n";
        cin>>imag;

    }
    Complex operator+(Complex c){
        Complex sum;
        sum.real=real+c.real;
        sum.imag=imag+c.imag;
        return sum;
    }
    Complex operator*(Complex c){
        Complex sum;
        sum.real=real*c.real-imag*c.imag;
        sum.imag=real*c.imag+imag*c.real;
        return sum;
    }
    friend ostream& operator<<(ostream& out,Complex c){
        out<<c.real;
        cout<<"+";
        out<<c.imag;
        cout<<"i";
        return out;

    }



};
int main(){
    Complex c1,c2,c;
    int n;
    cout<<"Enter the detailss of complex no 1: \n";
    c1.insert();
    cout<<"Enter the details of complex no 2: \n";
    c2.insert();
    cout<<"Press 1 for addition \n Press 2 for multiplication:\n";
    cin>>n;
    switch(n){
        case 1: 
                c=c1+c2;
                cout<<c;
                break;
        case 2: 
                c=c1*c2;
                cout<<c;
                break;
    }
    return 0;
}