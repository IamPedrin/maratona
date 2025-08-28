#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, aux = 0, x = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x % 3 == 0)
        {
            aux = aux + x;
        }
        else
        {
            int resto = x % 3;
            aux = aux + x - resto;
        }
    }

    cout << aux << "\n";

    return 0;
}