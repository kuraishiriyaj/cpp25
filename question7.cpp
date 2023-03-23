#include<iostream>
/* Define a class Greatest and define instance member fucntion 
to find the largest among 3 number using class ?
*/
using namespace std;
class greatest
{
    
    int a,b,c;
    int larg;
    public:
       
        greatest(int x,int y,int z)
        {
            a=x;
            b=y;
            c=z;
        }
    void largest()
    {
        larg=(a>b?a>c?a:c:b>c?b:c);
    }
    void print()
    {
        cout<<"largest of the number"<<a<<","<<b<<","<<c<<"="<<larg;
    }

};
int main()
{
    greatest s(6,3,1);

    s.largest();
    s.print();
    return 0;
}
