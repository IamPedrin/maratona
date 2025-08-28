#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A, D;
    cin >> A >> D;

    while (A && D)
    {
        vector<int> B(A), C(D);

        for (int i = 0; i < A; i++)
        {
            cin >> B[i];
        }

        for (int i = 0; i < D; i++)
        {
            cin >> C[i];
        }

        sort(B.begin(), B.end());
        sort(C.begin(), C.end());

        int A1 = B[0];
        int D1 = C[0], D2 = C[1];

        if (A1 >= D1 && A1 >= D2 )
        {
            cout << "N\n";
        }
        else if ((D1 > D2 && A1 == D1) || (D2 > D1 && D2 == A1))
        {
            cout << "N\n";
        }
        else
        {
            cout << "Y\n";
        }

        cin >> A >> D;
    }

    return 0;
}