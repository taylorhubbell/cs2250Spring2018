/*
 * =====================================================================================
 *
 *       Filename:  hello.cpp
 *
 *    Description:  hello world in C++
 *
 *        Version:  1.0
 *        Created:  04/10/2018 08:42:02 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Taylor Hubbell (), taylorhubbell@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//#include <stdio.h> for C
#include <iostream> // for C++
using namespace std; // for C++ standard name 

// Constants

// Function Prototypes

// Main Function
int main()
{
    int age;
    string name;
    cout << "Hello World C++" << endl;
    cout << "How old are you?"<< endl;
    cin >> age;
    cout << "You are " <<age << " old" << endl;
    cout << "What is your name?" << endl;
    //cin >>name; // take input up to the first space
    // TO DO: Need to take care of enter key from previous cin >>
    cin.ignore(); // should take care of the extra enter
    getline(cin, name); // takes all input similar to fgets // no enter key
    cout<<"Hello " << name << endl;
    return 0;
}
// Function Definitions


