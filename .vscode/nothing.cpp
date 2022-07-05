#include <iostream>
using namespace std;
class A
{
     public:
      void end()
      {
          cout<<"A "<<endl;
      }
};
class B:public A
{
    public:
      void car()
      {
          cout<<"B"<<endl;
      }
};
class C:public A
   {
       public:
       void bus()
       {
           cout<<"C"<<endl;
       }
};
class D:public A
{
    public:
      void transport()
      {
          cout<<"D"<<endl;
      }
};
int main()
{
    B b;
    C c;
    D d;
    b.car();
    c.bus();
    d.transport();
    return 0;
}