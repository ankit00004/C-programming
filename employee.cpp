// 1. DOCUMENTATION
/*
   Create a Employee Application with following details.
   -Employee name
   -Id
   -Email ID
   -Address
   -Mob no
   Reuse this employee info for programer, assitant engineer, business analyst, and manager at basic
   pay(BP) with 97% of BP at DA, 10% of BP as HRA, 12% of BP for PF, 0.1% of BP for staff club fund
   generate pay slip for the employee, with their gross and net salary.

*/
// TITLE :EMPLOYMEE APPLICATION
// OBJECTIVE : TO UNDERSTAND BACIS OF OOP
// AUTHOR : ANKIT BHARDWAJ
// Date : 06/05/2022

// 2. PREPROCESSING

#include <iostream>
using namespace std;

// 3.driver/application code

class employee
{
public:
    string name, adress, email, contact, ID;
    float gs, ns, bs, hra, pf, scf, da;

    void get_detail();
    void calculate();
    void display();
};

void employee ::get_detail()
{
    cout << "\nName :";
    cin >> name;

    cout << "ID :";
    cin >> ID;

    cout << "Adress :";
    cin >> adress;

    cout << "Contact no :";
    cin >> contact;

    cout << "Email ID :";
    cin >> email;

    cout << "Basic salary :";
    cin >> bs;
}

void employee::calculate()
{
    da = (0.97 * bs);
    hra = (0.1 * bs);
    gs = bs + da + hra;
    pf = (0.12 * bs);
    scf = (0.01 * bs);
    ns = gs - (pf + scf);
}

void employee::display()
{
    cout << "\nName         :" << name;
    cout << "\nID           :" << ID;
    cout << "\nAdress       :" << adress;
    cout << "\nContact no   :" << contact;
    cout << "\nEmail ID     :" << email;
    cout << "\nBasic salary :" << bs;
    cout << "\nGross salary :" << gs;
    cout << "\nNet salary   :" << ns;
}

class programer : public employee
{
public:
    void show_desig();
};

void programer::show_desig()
{
    cout << "\nProgramer designation ";
}

class assitant_engineer : public employee
{
public:
    void show_desig();
};

void assitant_engineer ::show_desig()
{
    cout << "\nAssitant Engineer designation ";
}

class business_analyst : public employee
{
public:
    void show_desig();
};

void business_analyst::show_desig()
{
    cout << "\nBusiness analyst designation ";
}

class manager : public employee
{
public:
    void show_desig();
};

void manager::show_desig()
{
    cout << "\nManager designation ";
}

// main section

int main()
{
    char opt;
    employee e;
    programer p;
    assitant_engineer a;
    business_analyst b;
    manager m;

    cout << "\n\nChose the option:";
    cout << "\nA.Programmer";
    cout << "\nB.Assitant engineer";
    cout << "\nC.Business analyst";
    cout << "\nD.Manager";
    cout << "\nEnter option which is given above:";
    cin >> opt;

    switch (opt)
    {
    case 'A':
        p.get_detail();
        p.calculate();
        p.display();
        p.show_desig();
        break;

    case 'B':
        a.get_detail();
        a.calculate();
        a.display();
        a.show_desig();
        break;

    case 'C':
        b.get_detail();
        b.calculate();
        b.display();
        b.show_desig();
        break;

    case 'D':
        m.get_detail();
        m.calculate();
        m.display();
        m.show_desig();
        break;

    default:

        cout << "\n\nERROR";
        break;
    }
}

// OUTPUT
/*
Chose the option:
A.Programmer
B.Assitant engineer
C.Business analyst
D.Manager
Enter option which is given above:A

Name :Ankit
ID :2213638
Adress :pune
Contact no :6205449720
Email ID :ankitbh3401@gmail.com
Basic salary :80000

Name         :Ankit
ID           :2213638
Adress       :pune
Contact no   :6205449720
Email ID     :ankitbh3401@gmail.com
Basic salary :80000
Gross salary :165600
Net salary   :155200
Programer designation
*/