#include <iostream>
using namespace std;
class square
{
    public:
    int l;
    void accept()
    {
        cout<<"Enter the length of sqaure"<<endl;
        cin>>l;
    }
    int area;
    void display()
    {
        area=l*l;
        cout<<"the area of square is"<<l;
    }
    int vol;
    void volume()
    {
        vol=l*l*l;
        cout<<"the volume of square is"<<vol;
    }
};
int main()
{
    square s;
    s.accept();//explicit function call
    s.display();
    s.volume();
    return 0;
}
