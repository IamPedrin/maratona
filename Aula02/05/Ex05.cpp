#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int x = 1, y = 2, z = 3, c = 0;

    cin >> n;

    while(n)
    {
        if(c == 0)
        {
            cout << x << " " << y << " " << z << " PUM\n";
            c = 1;
        }
        else
        {
            x += 4;
            y += 4;
            z += 4;
            cout << x << " " << y << " " << z << " PUM\n";
        }
        
        n--;
    }

    return 0;
}