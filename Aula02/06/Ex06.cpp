#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;

    cin >> n;

    while (n--)
    {
        cin >> x;
        int div = 0;
        for (int i = 1; i < x; i++)
        {
            if (x % i == 0)
            {
                div += i;
            }
        }

        if (div == x)
        {
            cout << x << " eh perfeito\n";
        }
        else
        {
            cout << x << " nao eh perfeito\n";
        }

    }
    return 0;
}