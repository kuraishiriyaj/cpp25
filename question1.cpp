#include<iostream>
/* Define a class Complex to represent a complex number Declare instance 
 member variable to store real and imaginary part of complex number,also 
 define instance member functions to set values of complex number and print
 values of complex number ?
*/
using namespace std;
class complex  
{
    int x;
    int y;
    public:
    
      complex(int a,int b)
      {
        x=a;
        y=b;
      }
      void print()
      {
        cout<<"complex  number is"<<"="<<x<<"+"<<y<<"i";
      }
} ;
int main()
{
    complex x(6,3);
    x.print();
    return 0;

}        