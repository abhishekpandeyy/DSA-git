

// class are the user-defined data type.
// class can have mulitple properties
// these propertiers can be accessed by the instance of class i.e objects.

#include <iostream>
using namespace std;

class student
{
public:
    int highSchoolMarks;
    int cgpa;
    student()
    {
        highSchoolMarks = 0;
        cgpa = 0;
        cout << "contructor is called." << endl;
    }
};

int main()
{

    student s1;
    student s;
    int x;
    cout << "enter x";
    cin >> x;
    cout << x;
}