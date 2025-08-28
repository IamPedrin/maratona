#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;

    while (n && m )
    {
        vector<int> vet(m);
        for (int i = 0; i < m; i++)
        {
            cin >> vet[i];
        }

        if (m > n)
        {
            cout << m - n << "\n";
        }
        else
        {
            int r = 0;
            for (int i = 0; i < m; i++)
            {
                for (int j = i + 1; j < m; j++)
                {
                    if (vet[i] == vet[j])
                    {
                        r++;
                    }
                }
            }
            cout << r << "\n";
        }

        cin >> n >> m;
    }
}