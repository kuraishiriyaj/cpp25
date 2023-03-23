#include<iostream>
/* Define a class Reverse number and define an instance member function
to find the reverse of a number using class ?
*/
using namespace std;
class Reverse
{
     int revers;
     int temp;
     int num;
     int x;
     public:
       Reverse(int a)
       {
        x=a;
       }
       void re()
       {
           num=x;
           revers=0;
           while(x!=0)
           {


          temp=x%10;
          revers=(revers*10)+temp;
          x=x/10;
           }
       }
       void print()
       {
        cout<<"revers of the number is"<<num<<"="<<revers;
       }

};
int main()
{
    Reverse s(5647);
    s.re();
    s.print();
    return 0;
}
