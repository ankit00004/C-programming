#include <iostream>
using namespace std;
float area(float);
float area(float, float);
int main()
{
    float l, b;
    float s;
    cout << "enter length:";
    cin >> l;
    cout << "enter breadth:";
    cin >> b;
    cout << "enter side square:";
    cin >> s;
    cout << "area of rectangle: " << area(l, b) << endl;
    cout << "area of square: " << area(s) << endl;
}
float area(float l, float b)
{
    return l * b;
}
float area(float s)
{
    return s * s;
}
