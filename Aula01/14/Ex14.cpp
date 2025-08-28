#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    while (n--)
    {
        int k;
        cin >> k;
        cin.ignore();

        string idioma;
        string controle;

        getline(cin, idioma);
        int z = 1;
        controle = idioma;
        for (int i = 0; i < k - 1; i++)
        {
            getline(cin, idioma);
            if (idioma != controle)
            {
                z = 0;
            }
        }

        if (z)
        {
            cout << controle << "\n";
        }
        else
        {
            cout << "ingles\n";
        }
    }
}