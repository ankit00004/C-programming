// 1. DOCUMENTATION
/*

*/
// TITLE : HOTEL BILL APPLICATION
// OBJECTIVE : TO UNDERSTAND BACIS OF OOP
// AUTHOR : ANKIT BHARDWAJ
// Date : 22/04/2022

// 2. PREPROCESSING
#include <iostream>
using namespace std;

// 3.driver/application code

class hotel_bill
{
public:
    int table_name, qty;
    float item_price, bill, dis_bill;
    string cust_name, cust_contact, item_name;
};

// Main_section

int main()
{
    hotel_bill b1; // object
    cout << "\n Please enter table no. :";
    cin >> b1.table_name;

    cout << "\n Please enter customer name :";
    cin >> b1.cust_name;

    cout << "\n Please enter customer contact :";
    cin >> b1.cust_contact;

    cout << "\n Please enter item name :";
    cin >> b1.item_name;

    cout << "\n Please enter item quantity :";
    cin >> b1.qty;

    cout << "\n Please enter item price :";
    cin >> b1.item_price;

    b1.bill = b1.item_price * b1.qty;
    b1.dis_bill = b1.bill - (b1.bill * 5 / 100);

    cout << "\n Table no:" << b1.table_name;
    cout << "\n customer name :" << b1.cust_name;
    cout << "\n customer contact :" << b1.cust_contact;
    cout << "\n item name:" << b1.item_name;
    cout << "\n item quantity:" << b1.qty;
    cout << "\n item price:" << b1.item_price;
    cout << "\n bill:" << b1.bill;
    cout << "\n You have to pay discounted bill :" << b1.dis_bill;
    cout << "\n Thanks for visiting";

    return 0;
}

// OUTPUT
/*
Please enter table no. :105

 Please enter customer name :Ankit

 Please enter customer contact :6205449720

 Please enter item name :Pizza

 Please enter item quantity :4

 Please enter item price :200

 Table no:105
 customer name :Ankit
 customer contact :6205449720
 item name:Pizza
 item quantity:4
 item price:200
 bill:800
 You have to pay discounted bill :760
 Thanks for visiting
 */