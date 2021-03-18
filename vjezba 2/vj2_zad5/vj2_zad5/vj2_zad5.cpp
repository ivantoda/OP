#include<iostream>
using namespace std;

int* unos() {
    int* niz;
    niz = new int[10];
    int i = 0;
    int n = 10;
    cin >> niz[0];
    while (niz[i] != 0) {

        if (i == 10) {

            int* dniz = new int[2 * n];
            int j = 0;
            while (niz[j]) {
                dniz[j] = niz[j];
                j++;
            }
            delete[] niz;
            niz = dniz;
        }
        i++;
        cin >> niz[i];
        if (i == 10) n += 10;
    }
    return niz;

}

int main() {
    int* niz = unos();
    int i = 0;
    while (niz[i])
    {
        cout << niz[i] << ", ";
        i++;
    }
    delete[] niz;
}