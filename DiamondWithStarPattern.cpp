#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < 2 * (n - i - 1); j++) cout << "-";
        cout << "*";
        for (int j = 0; j < 2 * i - 1; j++) cout << "-";
        if (i != 0) cout << "*";
        for (int j = 0; j < 2 * i - 1; j++) cout << "-";
        if (i != 0) cout << "*";
        cout << endl;
    }

    for (int i = 0; i < n - 1; i++) cout << "*-";
    cout << "*";
    for (int i = 0; i < n - 1; i++) cout << "-*";
    cout << endl;

    for (int i = n - 2; i >= 0; i--)
    {
     for (int j = 0; j < 2 * (n - i - 1); j++) cout << "-";
        cout << "*";
        for (int j = 0; j < 2 * i - 1; j++) cout << "-";
        if (i != 0) cout << "*";
        for (int j = 0; j < 2 * i - 1; j++) cout << "-";
        if (i != 0) cout << "*";
        cout << endl;
    }

    return 0;
}
