#include <iostream>
using namespace std;
class Shape
{
     public:
     int main l,b;
      void rect()
      {
          cout<<"Enter the length and width of the object"<<endl;
          cin>>l>>b;
      }
};
class Rectangle_area:public Shape
{
    public:
      void area_rect()
      {
          cout<<"The area of rectangle is"<<(l*b)<<endl;
      }
};
class Triangle_area:public Shape
   {
       public:
       void area_tri()
       {
           cout<<"The area of triangle is"<<(0.5*(l*b))<<endl;
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