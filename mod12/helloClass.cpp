/*
 * =====================================================================================
 *
 *       Filename:  helloClass.cpp
 *
 *    Description:  hellow world class
 *
 *        Version:  1.0
 *        Created:  04/10/2018 09:11:54 AM
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
class HelloNum
{
     //only the developer can see this section
     private:
         int number; //  attribute

     //The user has access here by writing Functions of Methods in C++
     public:
         void SetNumber(int n); // setter
         int GetNumber();       // getter
         void ShowNumber();     // prototype
};

// Function Prototypes

// Main Function
int main()
{
    // An instance of the class HelloNum
    HelloNum n1; // and object
    n1.SetNumber(91);
    n1.ShowNumber();
    cout<< "Number is: " << n1.GetNumber() <<endl;

    return 0;
}
// Function Definitions

void HelloNum::ShowNumber()
{
     cout<< "Your num is " << number << endl;
     return;
}
// prototype
void HelloNum::SetNumber(int n)
{
    //Set private member
    number = n;
    return;
}
int HelloNum::GetNumber()
{
    return number;

}

