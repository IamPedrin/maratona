#include <bits/stdc++.h>

using namespace std;

int main()
{
    float g = 9.80665;
    float pi = 3.14159;

    float h, a, v;
    int p1, p2, n;

    while (cin >> h >> p1 >> p2 >> n)
    {
        float alcance, radianos, tempo;

        for (int i = 0; i < n; i++)
        {
            cin >> a >> v;
            radianos = a * pi/180;
            tempo = (v * sin(radianos))/g + sqrt(2*h/g) + pow(((v * sin(radianos))/g), 2);
            alcance = v * cos(radianos) * tempo;

            if(alcance >= p1 && alcance <= p2)
            {
                cout << fixed << setprecision(5) << alcance << " -> DUCK\n";
            }
            else
            {
                cout << fixed << setprecision(5) << alcance << " -> NUCK\n";
            }
        }
    }
}