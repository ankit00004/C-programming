// DOCUMENTATION
/*
  Area of circle
*/

// TITLE :AREA OF CIRCLE
// OBJECTIVE : TO UNDERSTAND BACIS OF OOP
// AUTHOR : ANKIT BHARDWAJ
// Date : 30/04/2022

// Preprocessing

#include <iostream>
using namespace std;

// 3.driver/application code

class area
{
    float radius, area;

public:
    void get_radii()
    {
        cout << "\nEnter the radius of circle:";
        cin >> radius;
    }

    int get_area()
    {
        area = 3.14 * radius * radius;
        return area;
    }
};

// Main section

int main()
{
    area a;
    a.get_radii();
    int x = a.get_area();

    cout << "\nArea of circle:" << x;
}