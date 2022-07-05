#include <iostream>
using namespace std;
int main()
{
    int a,b;
cout<<"Enter any two number\n"<<endl;
cin>>a>>b;
cout<<"The addition of th value given is\t\n"<<(a+b);

string init("this is init\n");
string add("added now\n");

init=init+add;
cout<<init<<endl;
return 0;
}