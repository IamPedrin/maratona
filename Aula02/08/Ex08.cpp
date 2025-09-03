#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string x;

    cin >> n;
    cin.ignore();

    while(n--)
    {
        cin >> x;
        int r = 0;
        int n1 = stoi(string(1, x[0]));
        int n2 = stoi(string(1, x[2]));

        if(n1 == n2)
        {
            r = n1 * n2;
        }
        else if(isupper(x[1]))
        {
            r = n2 - n1;
        }
        else if(islower(x[1]))
        {
            r = n1 + n2;
        }

        cout << r << "\n";
    }
    return 0;
}