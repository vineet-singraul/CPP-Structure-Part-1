#include <iostream>
using namespace std;
struct student
{
    int RollNum;
    string namne;

    void Display(student p)
    {
        cout << p.namne << "Your Profile Hare:" << endl;
        cout << "student Name :" << p.namne << endl;
        cout << "student Roll Number :" << p.RollNum << endl;
    }

}p;
int main()
{
    student p = {1,"vineet"};
    p.Display(p);
}