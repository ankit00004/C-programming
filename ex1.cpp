// 1. DOCUMENTATION
/*
   Write a CPP program to generate a student mark sheet. Create a class student with the following members:
   name, branch, division, roll no, and marks in three subjects. Compute total and percentage .
   Display complete student information on screen.
*/
// TITLE : STUDENT DETAIL
// OBJECTIVE : TO UNDERSTAND BACIS OF OOP
// AUTHOR : ANKIT BHARDWAJ
// Date : 26/04/2022

// 2. PREPROCESSING

#include <iostream>
using namespace std;

// 3.driver/application code

class student
{

public:
    string name, branch;
    char divi;
    int rno, pps, lac, beee, total;
    float per;

} s;

// Main_section

int main()
{
    cout << "Enter your Name :";
    cin >> s.name;

    cout << "\nEnter your Branch :";
    cin >> s.branch;

    cout << "\nEnter your Division :";
    cin >> s.divi;

    cout << "\nEnter your Roll No :";
    cin >> s.rno;

    cout << "\nEnter your marks in LAC :";
    cin >> s.lac;

    cout << "\nEnter your marks in BEEE :";
    cin >> s.beee;

    cout << "\nEnter your marks in PPS :";
    cin >> s.pps;

    s.total = s.beee + s.lac + s.pps;
    s.per = s.total / 3.0;

    cout << "\n\n---Student Mark Sheet---\n\n";
    cout << "\n1.NAME        :" << s.name;
    cout << "\n2.BRANCH      :" << s.branch;
    cout << "\n3.DIVISION    :" << s.divi;
    cout << "\n4.ROLL NO     :" << s.rno;
    cout << "\n5.Total Scores:" << s.total;
    cout << "\n6.Percentage  :" << s.per;

    return 0;
}

// OUTPUT
/*
Enter your Name : Ankit

Enter your Branch :cse

Enter your Division :P

Enter your Roll No :2213638

Enter your marks in LAC :90

Enter your marks in BEEE :91

Enter your marks in PPS :93


---Student Mark Sheet---


1.NAME        :Ankit
2.BRANCH      :cse
3.DIVISION    :P
4.ROLL NO     :2213638
5.Total Scores:274
6.Percentage  :91.3333
*/
