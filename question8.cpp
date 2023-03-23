#include<iostream>
/* Define a class Rectangle and define an instance member function
to find the area  of the rectangle ?
*/
using namespace std;
class Rectangle
{
    int area;
    int l;
    int b;
     
     public:
     Rectangle(int x,int y)
     {
        l=x;
        b=y;

     }
     void Area()
     {
        area=l*b;
     }
     void print()
     {
        cout<<"area of the recatangle is"<<"="<<area;
     }
};
int main()
{
    Rectangle s(5,2);
      s.Area();
      s.print();
      return 0;
}
