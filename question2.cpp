#include<iostream>
/* Define a class Time to represent Time (like 3 hr 45 minute 20 sec) declare appropriate
number of instance member variables and also define instance member function to set
values for time and display values of time ?
*/
using namespace std;
class Time
{
    int hour;
    int minute;
    int second;
    public:
    Time(int a,int b,int c)
    {
        hour=a;
        minute=b;
        second=c;
    }
    void print()
    {
        cout<<hour<<":"<<minute<<":"<<second;
    }
};

int main()
{
  Time s(4,8,10);
   s.print();
   return 0;
}