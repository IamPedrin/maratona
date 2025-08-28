#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;

    while (cin >> m >> n)
    {
        long int fat1 = 1, fat2 = 1;

        for (int i = m; i >= 1; i--)
        {
            fat1 = fat1 * i;
        }

        for (int i = n; i >= 1; i--)
        {
            fat2 = fat2 * i;
        }

        cout << fat1 + fat2 << "\n";
    }

    return 0;
}
