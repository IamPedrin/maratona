#include <bits/stdc++.h>

using namespace std;

int main()
{
    int hrs, vm;
    int km;
    cin >> hrs >> vm;

    //vm = km/h
    //km = vm * h
    km = vm * hrs;
    cout << fixed << setprecision(3) << (float)km/12 << "\n";

    return 0;
}
