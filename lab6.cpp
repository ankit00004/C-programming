// DOCUMENTATION
/*
  Concept: Function Overloading
*/
// TITLE : CONSTRUCTOR
// OBJECTIVE : TO UNDERSTAND BACIS OF OOP
// AUTHOR : ANKIT BHARDWAJ
// Date : 24/05/2022

#include <iostream>
using namespace std;

class shape
{
public:
    int l, b, r, s;

    void area(float);
    void area(float, float);
};
void shape ::area(float n)
{
    s = n;
    r = s * s;
    cout << "Area of square: " << r << endl;
    // return 0;
}

void shape ::area(float n1, float n2)
{
    l = n1;
    b = n2;
    r = l * b;
    cout << "Area of square: " << r << endl;
    // return 0;
}

int main()
{
    shape s1;
    float side, len, bred;
    cout << "Enter the side of square: " << endl;
    cin >> side;
    s1.area(side);
    cout << "Enter the length and breadth of rectangle: " << endl;
    cin >> len >> bred;
    s1.area(len, bred);

    return 0;
}