#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n = ";
    cin >> n;
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i-1; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= n; j++)
        {
            cout<<"* ";
        }
        cout << endl;
    }
    return 0;
}