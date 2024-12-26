#include <iostream>
using namespace std;
struct student
{
    int RollNum;
    string namne;

    void Display()
    {
        cout << namne << "Your Profile Hare:" << endl;
        cout << "student Name :" << namne << endl;
        cout << "student Roll Number :" << RollNum << endl;
    }

} p;
int main()
{
    student *p1 = &p;
    p.namne = "Vineet";
    p.RollNum = 123;
    p1->Display();
}
