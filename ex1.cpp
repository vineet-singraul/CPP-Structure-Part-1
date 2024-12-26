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

} p, c;
int main()
{
    p.namne = "Vineet";
    p.RollNum = 123;
    c.namne = "Mohni";
    c.RollNum = 122;
    p.Display();
    cout << "-----------------" << endl;
    c.Display();
}
