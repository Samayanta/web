#include <iostream>
using namespace std;
class Car
{
     public:
      void car()
      {
          cout<<"my fav car is "<<endl;
      }
};
class Bus
{
    public:
      void bus()
      {
          cout<<"my fav bus is"<<endl;
      }
};
class Vechicle:public Car ,public Bus
   {
       public:
       void transport()
       {
           cout<<"bpth are vechicles"<<endl;
       }
};
int main()
{
    Vechicle s;
    s.car();
    s.bus();
    s.transport();
    return 0;
}