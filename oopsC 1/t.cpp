
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    void sound()
    {
        cout << "Some generic animal sound" << endl;
    }
};

class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Bark" << endl;
    }
};

int main()
{
    Animal a;
    a.sound();
    Dog d;
    d.sound();
    return 0;
}
