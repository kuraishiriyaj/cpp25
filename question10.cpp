#include<iostream>
/* Define a class Area and define instance member functions to find the area
of the different spapes like square , recatamge,cicle etc:*/
using namespace std;
class Area
{
   public:
   int a;
   int b;
   float side;
   int area;
  
     Area(float x,int y=0,int z=0)
     {
      a=x;
      b=y;
      side=z;
         
     }
     float square()

     {
         area=(a*a);
         return area;
        
     }
    
     int rectangle()
     {
      area=(a*b);
      return area;
     }
     

};
int main()
{
   Area Square(7.3);
   cout<<Square.square()<<endl;
  
   Area Rectangle(6,3);
  cout<< Rectangle.rectangle();
  
   return 0;
}
