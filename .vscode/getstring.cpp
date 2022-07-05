#include <iostream>
using namespace std;
int main()
{
    string s1,s2,result;
    cout<<"enter your name"<<endl;
    getline(cin,s1);
    //cin>>s1;
    cout<<"enter ur address"<<endl;
    getline(cin,s2);
    //cin>>s2;
    result =s1+s2;
    cout<<"Resultant string="<<result;
    return 0;
}