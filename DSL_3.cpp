#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int count = 0;
    char set[7] = {'1', '3', 'a', 's', 't', 'i', '\0'};
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            for (int k = 0; k < 6; k++)
            {
                for (int l = 0; l < 6; l++)
                {
                    if ((i != j) && (i != k) && (i != l) && (j != k) && (j != l) && (k != l))
                    {
                        cout << set[i] << set[j] << set[k] << set[l] << endl;
                        count++;
                    }
                }
            }
        }
    }
    cout << "number of random password generated are: " << count << endl;
    return 0;
}
