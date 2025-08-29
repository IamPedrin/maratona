#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    while (n)
    {
        char id;
        int t;
        string jm;

        int auxTempo = 0, auxC = 0;
        char auxChar;
        cin >> id >> t;
        cin.ignore();
        getline(cin, jm);
        auxChar = id;
        for (int i = 0; i < n-1; i++)
        {
            cin >> id >> t;
            cin.ignore();
            getline(cin, jm);

            if (jm == "incorrect" && id == auxChar)
            {
                auxTempo += 20;
            }
            else
            {
                auxC++;
                auxTempo = auxTempo + t;
            }
        }
        if (auxC > 0)
        {
            cout << auxC << " " << auxTempo << "\n";
        }
        else
        {
            cout << 0 << " " << 0 << "\n";
        }

        cin >> n;
    }

    return 0;
}