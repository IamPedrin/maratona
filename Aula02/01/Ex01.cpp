#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string palavra;
    cin >> n;
    cin.ignore();
    while (n)
    {
        getline(cin, palavra);
        string c = palavra;
        for(int i = 0; i < 3; i++)
        {
            if(i == 0)
            {
                for(int j = 0; j < palavra.size(); j++)
                {
                    if(isalpha(palavra[j]))
                    {
                        c[j] = char(int(palavra[j]) + 3);
                    }
                }
            }
            else if(i == 1)
            {
                reverse(c.begin(), c.end());
            }
            else
            {
                int tamanho = c.size();
                for(int j = (tamanho/2); j < tamanho; j++)
                {
                    c[j] = char(int(c[j] - 1));
                }
            }

        }
        cout << c << "\n";
        n--;
    }

    return 0;
}