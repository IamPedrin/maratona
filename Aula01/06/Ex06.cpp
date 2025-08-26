#include <bits/stdc++.h>

using namespace std;

int main() {

    int k, n, m, x, y;

    cin >> k;

    while(k)
    {
        cin >> n >> m;

        for(int i = 0; i < k; i++)
        {
            cin >> x >> y;

            if(x == n || y == m)
            {
                cout << "divisa\n";
            }
            else if(x > n && y > m)
            {
                cout << "NE\n";
            }
            else if(x > n && y < m)
            {
                cout << "SE\n";
            }
            else if(x < n && y < m)
            {
                cout << "SO\n";
            }
            else if(x < n && y > m)
            {
                cout << "NO\n";
            }
        }

        cin >> k;
    }

    return 0;
}