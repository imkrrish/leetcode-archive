// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     int r = 1;
//     cout << "Enter value of n = ";
//     cin >> n;
//     for (int i = 1; i <= 2 * n; i++)
//     {
//         if (i % 2 != 0)
//         {
//             for (int j = 1; j <= 2 * n - 2 * r; j++)
//             {
//                 cout << " ";
//             }
//             r++;
//             for (int j = 1; j <= i; j++)
//             {
//                 cout << "* ";
//             }
//             cout << endl;
//         }
//     }
//     r = n;
//     for (int i = 2 * n; i >= 1; i--)
//     {
//         if (i % 2 != 0)
//         {
//             for (int j = 1; j <= 2 * n - 2 * r; j++)
//             {
//                 cout << " ";
//             }
//             r--;
//             for (int j = 1; j <= i; j++)
//             {
//                 cout << "* ";
//             }
//             cout << endl;
//         }
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n = ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}