#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    string entrada;

    cin >> t;

    while (t)
    {
        cin >> entrada;
        int numString = entrada.find('!');
        int n = stoi(entrada.substr(0, numString));
        int qtdExc = count(entrada.begin(), entrada.end(), '!');

        int resultado = 1;
        if (qtdExc == 1)
        {
            for (int i = 1; i <= n; i++)
            {
                resultado *= i;
            }
        }
        else
        {
            resultado = n;
            for (int i = 1; i <= qtdExc; i++)
            {
                if (n - (qtdExc * i) != 0)
                {
                    resultado *= abs(n - qtdExc * i);
                }
            }
        }

        cout << resultado << "\n";
        t--;
    }
}