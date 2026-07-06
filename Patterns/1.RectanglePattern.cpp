#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter no. of rows" << endl;
    cin >> x;
    cout << "Enter no. of columns" << endl;
    cin >> y;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}