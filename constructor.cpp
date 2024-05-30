// DOCUMENTATION
/*
  Concept: Constructor
  Write a CPP program that represents the complex number (for example:  2 + 3i)
*/
// TITLE : CONSTRUCTOR
// OBJECTIVE : TO UNDERSTAND BACIS OF OOP
// AUTHOR : ANKIT BHARDWAJ
// Date : 13/05/2022

// 2. PREPROCESSING

#include <iostream>
using namespace std;

// 3.driver/application code

class complex
{
    float real, img;

public:
    complex()
    {
        real = 0;
        img = 0;
        cout << real << "+" << img << "i";
    }

    // complex();                // default
    complex(float, float);    // parameterise
    complex(const complex &); // copy
};

complex ::complex(float r, float i)
{
    real = r;
    img = i;
    cout << real << "+" << img << "i";
}

complex ::complex(const complex &obj)
{
    real = obj.real;
    img = obj.img;
}
int main()
{
    // complex c1;
    complex c2(2, 3);
    complex c3 = c2;
}
