#include <bits/stdc++.h>

using namespace std;

int main()
{
    string frase;
    char res = 'Y';
    char letra;
    int k = 1;

    getline(cin, frase);

    while(frase != "*")
    {
        vector<string> vet;
        stringstream ss(frase);
        string palavra;
        while(ss >> palavra)
        {
            transform(palavra.begin(), palavra.end(), palavra.begin(), ::toupper);
            vet.push_back(palavra);
        }

        //Pegar a primeira letra da primeira palavra
        letra = vet[0][0];

        while(res == 'Y' && k < vet.size())
        {
            if(vet[k][0] != letra)
            {
                res = 'N';
            }

            k++;
        }

        cout << res << "\n";
        k = 0;
        res = 'Y';
        getline(cin, frase);   
    }
   
    return 0;
}