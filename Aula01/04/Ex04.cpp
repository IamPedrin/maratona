#include <bits/stdc++.h>

using namespace std;

int main()
{
    int hInicial, hFinal, x;

    cin >> hInicial >> hFinal;
    
    if(hInicial > hFinal){
        x = 24 - hInicial;
        x = x + hFinal;
        cout << "O JOGO DUROU "<< x << " HORA(S)\n";
    } else if(hFinal > hInicial){
        x = hFinal - hInicial;
        cout << "O JOGO DUROU "<< x << " HORA(S)\n";
    } else {
        cout << "O JOGO DUROU "<< 24 << " HORA(S)\n";
    }

    return 0;
}