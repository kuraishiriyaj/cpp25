#include<iostream>
/* Define a class circle and define an instance member function to 
find the area of the circle ?
*/
using namespace std;
class Circle
{
    int area;
    float side;
    public:

      Circle(float x,int y,int z)
      {
        side=x;
        p=y;
        q=z;
      }
      void Area()
      {
         area=(3.14*side*side);
      }
      void print()
      {
        cout<<"area of the circle is"<<"="<<area;
      }
      
};
int main()
{
    Circle s(3.5);

    s.Area();
    s.print();
    return 0;
}