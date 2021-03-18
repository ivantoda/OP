#include<iostream>
using namespace std;

int* vraca_niz(int niz[], int n)
{
    for (int i = 2; i < n; i++)
    {
        niz[i] = niz[i - 2] + niz[i - 1];
    }
    return niz;
}

int main()
{
    int* niz;
    niz = new int [10] { 1, 1 };
    int n;
    cin >> n;

    vraca_niz(niz, n);

    for (int i = 0; i < n; i++)
    {
        cout << niz[i] << "\n";
    }
    delete [] niz;
    niz = 0;
}