#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h, z, l;

    cin >> h >> z >> l;

    if ((h > z && h < l) || (h > l && h < z))
    {
        cout << "huguinho" << "\n";
    }
    else if ((l > z && l < h) || (l > h && l < z))
    {
        cout << "luisinho" << "\n";
    }
    else
    {
        cout << "zezinho" << "\n";
    }

    return 0;
}