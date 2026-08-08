#include <iostream>
#include <string>
#include <map>

using namespace std;

 class student
{
    public:
    string name ;
    int rollNo ;
    char section ;
    long long int phoneNumber ;
};

int main()
{
    string uniqueId;
    map<string, student> students = {
        {"s1", {"Prathmesh", 1, 'A', 1234567890}},
        {"s2", {"Rohit", 2, 'B', 9876543210}},
        {"s3", {"Cat", 3, 'C', 5555555555}},
        {"s4", {"Dog", 4, 'A', 4444444444}}
    };

    cout<< "Enter unique id: " << endl;
    cin>> uniqueId;

    if (students.find (uniqueId) != students.end())
    {
        cout<< "Student: " << students[uniqueId].name << endl
            << "Roll No: " << students[uniqueId].rollNo << endl
            << "Section: " << students[uniqueId].section << endl
            << "Phone Number: " << students[uniqueId].phoneNumber << endl;
    }
    else
    {
        cout<< "Student not found!" << endl;
    }

    return 0;

}