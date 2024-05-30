// DOCUMENTATION
// Concept: Generic class
/*
Develop a generic vector application that allows following operations
  1. To create the vector.
  2. To modify the value of a given element.
  3.To multiply by a scalar value

*/
// TITLE : CONSTRUCTOR
// OBJECTIVE : TO UNDERSTAND BACIS OF OOP
// AUTHOR : ANKIT BHARDWAJ
// Date : 10/06/2022

// 2. PREPROCESSING
#include <iostream>
using namespace std;

template <class T> // template
class vector
{
    T v[20], val, naval, sval;
    int index, size = 0, i;
    char ch;

public:
    void create(void);
    void modify(void);
    void multiply(void);
    void display(void);
};

template <class T>
void vector<T>::create()
{
    do
    {
        cout << "\nEnter the position and value:";
        cin >> index >> val;
        v[index] = val;
        cout << "\nDo you want to add more value:";
        cin >> ch;
    } while (ch == 'y' || ch != 'n');
}

template <class T>
void vector<T>::modify()
{
    cout << "\nDo you want to modify the given value:";
    cin >> ch;
    if (ch == 'y' || ch != 'n')
    {
        cout << "\nEnter new position and value to modify:";
        cin >> index >> val;
        v[index] = val;
    }
}

template <class T>
void vector<T>::multiply()
{
    cout << "\nEnter the scalar value to multiply:";
    cin >> sval;
    naval = sval * val;
    v[index] = naval;
}

template <class T>
void vector<T>::display()
{
    cout << "\nValue:" << val;
    cout << "\nIndex:" << index;
    cout << "\nScalar value:" << naval;
}
int main()
{
    vector<int> v1;
    v1.create();
    v1.modify();
    v1.multiply();
    v1.display();
    return 0;
}