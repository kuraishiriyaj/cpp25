#include<iostream>
/* Define  a class square to find the square of a number and
write a c++ program to count number of times a fuction  is called ?

*/
using namespace std;
class square
{
   int q;
   int x;
   int static count;
     public:
     square(int a)
     {
      x=a;
     
     }
     void sqr()
     {
       count++;
        
        q=(x*x);
     }
     void print()
     {
        cout<<"square of the number is"<<q<<endl;
        cout<<"count of the number"<<count;
     }
};
int square ::count=0;
int main()
{
   square s(4);
   square b(5);
   s.sqr();
   s.sqr();
   s.print();
   return 0;
}