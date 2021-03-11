#include<iostream>
using namespace std;

void vraca(int *niz, int &a, int &b, int n) {
    a = niz[0];
    for (int i = 0; i < n; i++)
    {
        if (a > niz[i])
        {
            a = niz[i];
        }
    }
    b = niz[0];
    for (int i = 0; i < n; i++)
    {
        if (b < niz[i])
        {
            b = niz[i];
        }
    }
}

int main(){
    int n, min, max;

    cout << "unesi broj elemenata niza";
    cin >> n;

    int niz[20];

    for (int i = 0; i < n; i++)
    {
        cin >> niz[i];
    }


    vraca(niz, min, max, n);

    cout << "najmanji elemnt je:" << min << "   najveci element je:" << max;
}