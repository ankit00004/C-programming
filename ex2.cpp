// 1. DOCUMENTATION
/*
   Write a program to print the area of a rectangle by creating a class named
  'Area' having two functions and two data members: Length and breadth.
   First function named as 'setDim' takes the length and breadth of the rectangle
   as parameters and the second function named as 'getArea' returns the area of the rectangle.
   Length and breadth of the rectangle are entered through the keyboard.
*/
// TITLE :AREA OF RECTANGLE
// OBJECTIVE : TO UNDERSTAND BACIS OF OOP
// AUTHOR : ANKIT BHARDWAJ
// Date : 30/04/2022

// 2. PREPROCESSING

#include <iostream>

using namespace std;

// 3.driver/application code

class area

{

    int l, b; // l=length,b=breadth.

public:
    void set_dim()

    {

        cout << "\nEnter length:";
        cin >> l;

        cout << "\nEnter Breadth:";
        cin >> b;
    }

    int getArea()

    {

        return l * b;
    }
};

// Main_section

int main()

{

    area a; // creating object for class area.

    a.set_dim();

    int x = a.getArea(); // storing the returned value in x;

    cout << "\nArea: " << x;
}

// OUTPUT
/*
  Enter length:50

  Enter Breadth:40

  Area: 2000
*/