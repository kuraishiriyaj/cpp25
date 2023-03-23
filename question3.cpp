#include<iostream>
    #include<iostream>
    /* define a class factorial and dfine an instance member function
    to find the factorial of a number using class ?
    */
    using namespace std;
    class factorial
    {
      int x;
      int fact;
      
       public:
          factorial(int a)
          {
            x=a;
          }
          void fac()
          {
            fact=1;
                for(int i=1;i<=x;i++)
                {   
                     fact=fact*i;
                }
          }
          void print()
          {
            cout<<"factorial of the number :"<<fact;
          }
    };

    int main()
    {
       factorial s(5);
       s.fac();
       s.print();
       return 0;
    }
