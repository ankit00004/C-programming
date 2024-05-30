// DOCUMENTATION
/*
  Develop a complex number application. It must support following operations:
 1. Addition of two complex numbers.
 2. Multiplication of two complex numbers.
 3. Read and write of complex Numbers.
 */

// PREPROCESSING

#include <iostream>
using namespace std;

class Complex
{
    float real, img;

public:
    void get(void);
    void operator+(Complex);
    void operator-(Complex);
    void operator*(Complex);
    void operator/(Complex);
};

void Complex ::get()
{
    cout << "\nPlease Enter real and img number:";
    cin >> real >> img;
    cout << real << "+" << img << "i";
}

void Complex ::operator+(Complex c)
{
    real = real + c.real;
    img = img + c.img;
    cout << real << "+" << img << "i" << endl;
}

void Complex ::operator-(Complex c)
{
    real = real - c.real;
    img = img - c.img;
    cout << real << "-" << img << "i" << endl;
}
void Complex ::operator*(Complex c)
{
    real = real * c.real;
    img = img * c.img;
    cout << real << "*" << img << "i" << endl;
}
void Complex ::operator/(Complex c)
{
    real = real / c.real;
    img = img / c.img;
    cout << real << "/" << img << "i" << endl;
}

int main()
{
    Complex c1, c2;
    c1.get();
    c2.get();

    c1 + c2;
    c1 - c2;
    c1 *c2;
    c1 / c2;

    return 0;
}