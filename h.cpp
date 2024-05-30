#include <iostream>
using namespace std;

class bill
{
public:
    string c_name;
    int table_no;
    long long int c_contact, bill;
    int disc, d_amt;

    void get_Order()
    {
        cout << "Enter Customer name: ";
        cin >> c_name;
        cout << "Enter Customer contact number: ";
        cin >> c_contact;
        cout << "Enter Table number: ";
        cin >> table_no;
        cout << "Enter Total bill : ";
        cin >> bill;
    }

    void discount()
    {
        disc = bill * (0.1);
        d_amt = bill - disc;
    }

    void display_bill()
    {
        cout << endl
             << "--------CUSTOMER BILL-------" << endl
             << endl;
        cout << "Customer name: " << c_name << endl;
        cout << "Customer contact number: " << c_contact << endl;
        cout << "Table number: " << table_no << endl;
        cout << "Total bill: " << d_amt << endl;
    }
};

int main()
{
    bill b;
    b.get_Order();
    b.discount();
    b.display_bill();
    return 0;
}
