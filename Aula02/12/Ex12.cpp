#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, p, q;

    cin >> n;

    
    float total = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> p >> q;
        if (p == 1001)
        {
            total += q * 1.50;
        }
        else if (p == 1002)
        {
            total += q * 2.50;
        }
        else if (p == 1003)
        {
            total += q * 3.50;
        }
        else if (p == 1004)
        {
            total += q * 4.50;
        }
        else
        {
            total += q * 5.50;
        }
    }

    cout << fixed << setprecision(2) << total << "\n";
}