#include <iostream>
#include <string.h>
using namespace std;

class Matrix
{
public:
    int i, j;
    int a[3][3], b[3][3], add1[3][3], sub1[3][3], mul1[3][3];
    void accept(int, int);
    void display(int, int);
    void addition(int, int);
    void subtraction(int, int);
    void multiplication(int, int);
};
void Matrix::accept(int r, int c)
{
    cout << "Matrix 1 : " << endl;
    for (i = 1; i <= r; i++)
    {
        cout << "Enter row " << i << ":" << endl;
        for (j = 1; j <= c; j++)
        {
            cout << "Enter column " << i << " element " << j << " = ";
            cin >> a[i][j];
        }
    }
    cout << "Matrix 2 : " << endl;
    for (i = 1; i <= r; i++)
    {
        cout << "Enter row " << i << ":" << endl;
        for (j = 1; j <= c; j++)
        {
            cout << "Enter column " << i << " element " << j << " = ";
            cin >> b[i][j];
        }
    }
}
void Matrix::display(int r, int c)
{
    cout << "Matrix 1 = " << endl;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            cout << " " << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Matrix 2 = " << endl;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            cout << " " << b[i][j] << " ";
        }
        cout << endl;
    }
}
void Matrix::addition(int r, int c)
{
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            add1[i][j] = a[i][j] + b[i][j];
        }
    }

    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            cout << " " << add1[i][j];
        }
        cout << endl;
    }
}
void Matrix::subtraction(int r, int c)
{
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            sub1[i][j] = a[i][j] - b[i][j];
        }
    }

    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            cout << " " << sub1[i][j];
        }
        cout << endl;
    }
}
void Matrix::multiplication(int r, int c)
{
    cout << "multiply of the matrix : " << endl;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            mul1[i][j] = 0;
            for (int k = 1; k <= c; k++)
            {
                mul1[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= c; j++)
        {
            cout << " " << mul1[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    Matrix m1;
    int r, c, ch;
    cout << "Enter value for row = ";
    cin >> r;
    cout << "Enter value for col = ";
    cin >> c;
    m1.accept(r, c);
    cout << endl;
    do
    {
        cout << "1.Display  2.Addition  3.Subtraction  4.Multiplication  5.Exit" << endl;
        cout << "Enter operation = ";
        cin >> ch;
        if (ch == 5)
        {
            break;
        }
        switch (ch)
        {
        case 1:
        {
            m1.display(r, c);
            break;
        }
        case 2:
        {
            m1.addition(r, c);
            break;
        }
        case 3:
        {
            m1.subtraction(r, c);
            break;
        }
        case 4:
        {
            m1.multiplication(r, c);
            break;
        }
        default:
        {
            cout << "Invalid Input" << endl;
            break;
        }
        }
    } while (ch < 5);
    return 0;
}
