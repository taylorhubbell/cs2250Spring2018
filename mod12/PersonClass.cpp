/*
 * =====================================================================================
 *
 *       Filename:  PersonClass.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/10/2018 09:48:18 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Taylor Hubbell (), taylorhubbell@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//#include <stdio.h> for C
#include <iostream> //for C++
using namespace std; //  for C++

// Constants
class Person
{
  private:
    int age;
    string name;
    double weight;

  public: 
    void SetAge(int a);
    int GetAge();

    void SetName(string n);
    string GetName();

    void SetWeight(double w);
    double GetWeight();
}
// Function Prototypes

// Main Function
int main()
{
    Person p1;
    p1.SetAge(21);
    p1.SetName("Waldo");
    p1.SetWeight(245.4);

    cout<<"Name is " << p1.GetName() << endl;
    cout<<"Age is " << p1.GetAge() << endl;
    cout<<"Weight is " << p1.GetWeight() << endl;
    return 0;
}
// Function Definitions

void Person::SetAge(int a)
{
age = a;
return;
}
int Person::GetAge()
{
return age;
}

void Person::SetName(int a)
{
name = n;
return;
}
int Person::GetAge()
{
return name;
}

void Person::SetWeight(double w)
{
weight = w;
return;
}
double Person::GetWeight()
{
return;
}

