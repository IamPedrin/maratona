#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        int x = 1, y = 1, z = 1;
        x = x * i;
        y = x * i;
        z = y * i;
        cout << x << " " << y << " " << z << "\n";
        cout << x << " " << y + 1 << " " << z + 1 << "\n";
    }
}