#include <iostream>
using namespace std;

int main()
{
    for (int i = 4; i >= 0; i--)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
    return 0;
}