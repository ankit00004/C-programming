#include <iostream>
using namespace std;

class student
{
    string name, no;

public:
    void get_d()
    {

        cout << "\nEnter your name:";
        cin >> name;
        cout << endl
             << "Enter your Contact Number:";
        cin >> no;
    }

    void display()
    {
        cout << endl
             << "NAME:" << name;
        cout << endl
             << "Contact NO :" << no << endl;
    }
};

class engineer : public student
{
    string spec;

public:
    void get_sd()
    {
        cout << endl
             << "Enter Subject :";
        cin >> spec;
    }
    void displays()
    {
        cout << "Subject:" << spec;
        cout << endl
             << "Verified Engineering student.";
    }
};

class medical : public student
{
    string spec;

public:
    void get_sd()
    {
        cout << endl
             << "Enter Subject :";
        cin >> spec;
    }
    void displays()
    {
        cout << "Subject  :" << spec;
        cout << endl
             << "Verified Medical student.";
    }
};

class commerce : public student
{
    string spec;

public:
    void get_sd()
    {
        cout << endl
             << "Enter Subject :";
        cin >> spec;
    }
    void displays()
    {
        cout << "Subject :" << spec;
        cout << endl
             << "Verified Commerce student.";
    }
};

int main()
{
    int n;
    student s;
    engineer e;
    medical m;
    commerce c;

    cout << "\n---Verification Facility---\n";
    cout << "1.Engineering\n2.Medical\n3.Commerce";
    cout << "\nEnter Your Degree  NO:";
    cin >> n;

    switch (n)
    {
    case 1:
        e.get_d();
        e.get_sd();
        e.display();
        e.displays();
        break;

    case 2:
        m.get_d();
        m.get_sd();
        m.display();
        m.displays();
        break;

    case 3:
        c.get_d();
        c.get_sd();
        c.display();
        c.displays();
        break;

    default:
        cout << "\nERROR";
    }

    return 0;
}
