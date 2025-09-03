#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    string entrada;

    cin >> t;
    cin.ignore();

    while (t--)
    {
        cin >> entrada;
        int numString = entrada.find('!');
        int n = stoi(entrada.substr(0, numString));
        int qtdExc = count(entrada.begin(), entrada.end(), '!');

        long int resultado = 1;
        
        for (int i = 0; n - qtdExc * i >= 1; i++)
        {
            resultado *= (n - qtdExc * i);
        }

        cout << resultado << "\n";
    }
}