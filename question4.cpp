#include<iostream>
/* Define a class Largest number and define an instance member function to 
find the largest of the three numbers using the class ?
*/
using namespace std;
class largest
{
   int x,y,z;
   int large;
   public:
   
     largest(int a,int b,int c)
     {
        x=a;
        y=b;
        z=c;
     }
     void larg()
     {
      large=(x>y?x>z?x:z:y>z?y:z);
     }
     void print()
     {
      cout<<"largest number is"<<x<<","<<y<<","<<z<<"="<<large;
     }
};
int main()
{
   largest s(5,3,8);
   s.larg();
   s.print();
   return 0;
}