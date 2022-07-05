#include <iostream>
using namespace std;
class student
{
    public:
    int rollno;
    void accept()
    {
        cout<<"Enter any student number"<<endl;
        cin>>rollno;
    }
    void display()
    {
        cout<<"the enterded roll no is"<<rollno;
    }
};
int main()
{
    student s;
    s.accept();//explicit function call
    s.display();
    return 0;
}
