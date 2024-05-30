#include <iostream>
using namespace std;
class publication
{
public:
    string tittle;
    float price;
    void get_pub(void);
    void put_pub(void);
};

void publication ::get_pub()
{
    cout << "\nEnter Tittle:";
    cin >> tittle;
    cout << "Enter Price:";
    cin >> price;
}

void publication ::put_pub()
{
    cout << "\nTittle:" << tittle;
    cout << "\nPrice:" << price;
}

class book : public publication
{
public:
    int pages;
    void get_book(void);
    void put_book(void);
};

void book ::get_book()
{
    cout << "\nEnter the number of pages in the book:";
    cin >> pages;
}

void book ::put_book()
{
    cout << "\nNumber of pages in the book is " << pages;
    try
    {
        if (pages <= 0)

            throw pages;
    }
    catch (int e)
    {
        cout << "\nERROR: Page number should not be less than & Equal to 0. ";
    }
}

class tape : public publication
{
public:
    float time;
    void get_tape(void);
    void put_tape(void);
};

void tape ::get_tape()
{
    cout << "\nEnter playing timing:";
    cin >> time;
}

void tape ::put_tape()
{
    cout << "\nPlaying timing of the tape is" << time;

    try
    {
        if (time <= 0)

            throw time;
    }
    catch (float e)
    {
        cout << "\nERROR: Playing timing should not be less than and eqaul to 0";
    }
}

int main()
{
    char opt;
    publication p;
    book b;
    tape t;

    cout << "\n\nChose the option:";
    cout << "\nA.Book \nB.Tape";
    cout << "\nEnter option which is given above:";
    cin >> opt;

    switch (opt)
    {
    case 'A':
        b.get_pub();
        b.get_book();
        b.put_pub();
        b.put_book();
        break;

    case 'B':
        t.get_pub();
        t.get_tape();
        t.put_pub();
        t.put_tape();
        break;
    default:
        break;
    }
}