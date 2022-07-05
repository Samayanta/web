#include <iostream>
using namespace std;
class Rect
{
    public:
    void volume()
    {
        cout<<"this is a volume function";
    }
    void volume(int a)
    {
        cout<<"the given value is "<<a<<endl;
    }
    void volume(int a, int b)
    {
        cout<<"the addition value is "<<(a+b)<<endl;
    }

};
int main()
{
    int a,b;
    Rect s;
    cout<<"enter value for a and b"<<endl;
    cin>>a>>b;
    s.volume();
    s.volume(a);
    s.volume(a,b);
    return 0;
}
