#include<iostream>
using namespace std;
class Time
{
     int hour;
     int min;
     public:

         Time(int h,int m)
         {
            hour=h;
            min=m;
         }
         Time()
         {
            
         }
         Time add(Time s)
         {
            Time p;
            int t=min+s.min;
             p.hour=hour+s.hour+(t)/60;
             p.min=(min+s.min)%60;
             return p;
         }
         void print()
         {
            cout<<"Hour "<<"="<<hour<<"min"<<"="<<min<<endl;
         }
};
int main()
{
    Time t1(5,60),t2(6,8),t3(6,60),t4(4,80),t5;
    t5=t1.add(t2).add(t3).add(t4); // ----> R ----> L SOLVE HO RAHA HAI ?
    t5.print();
    return 0;
}
