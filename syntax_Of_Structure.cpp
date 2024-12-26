#include <iostream>
using namespace std;
struct Student
{
    int RollNum = 123;
    string namne = "Vineet";
    int arr[5] = {80, 70, 90, 54, 60};
} p;
int main()
{
    cout<<p.namne<<"Your Profile Hare:"<<endl;
    cout<<"Student Name :"<<p.namne<<endl;
    cout<<"Student Roll Number :"<<p.RollNum<<endl;
    cout<<"Student Roll Marks :"<<p.arr[0]<<" , "<<p.arr[1]<<" , "<<p.arr[2]<<" , "<<p.arr[3]<<" , "<<p.arr[4]<<endl;
}