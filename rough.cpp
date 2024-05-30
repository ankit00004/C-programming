/*#include <iostream>
using namespace std;

class Maths
{
public:
    int n1, n2;
    void add(void);
};

void Maths ::add()
{
    cout << "\nPlease Enter any two number:" << endl;
    cin >> n1 >> n2;
    cout << "\nAddition in Maths:" << n1 + n2 << endl;
}
//----------------------------------------------
class Stats : public Maths
{
public:
    void add(void);
};

void Stats ::add()
{
    cout << "\nPlease Enter any two number:" << endl;
    cin >> n1 >> n2;
    cout << "\nAddition in stats:" << n1 + n2 << endl;
}
int main()
{
    Maths m1;
    m1.add();

    Stats s1;
    s1.add();

    return 0;
}*/
//--------------------------------------
/*
#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area(void) = 0;
};

class Circle : public Shape
{
    int r;
    cout << "\nEnter the radius of circle:";

    cin >> r;
};

int main()
{

    return 0;
}
*/
/*#include <iostream>
using namespace std;
template <class T, int N>
class mysequence
{
    T memblock[N];

public:
    void setmember(int x, T value);
    T getmember(int x);
};
template <class T, int N>
void mysequence<T, N>::setmember(int x, T value)
{
    memblock[x] = value;
}
template <class T, int N>
T mysequence<T, N>::getmember(int x)
{
    return memblock[x];
}
int main()
{
    mysequence<int, 5> myints;
    mysequence<double, 5> myfloats;
    myints.setmember(0, 100);
    myfloats.setmember(3, 3.1416);
    cout << myints.getmember(0) << '\n';
    cout << myfloats.getmember(3) << '\n';
    return 0;
}
*/
#include <iostream>
using namespace std;
class Test
{
    static int x;

public:
    Test() { x++; }
    static int getX() { return x; }
};

int Test::x = 0;

int main()
{
    cout << Test::getX() << " ";
    Test t[5];
    cout << Test::getX();
}
