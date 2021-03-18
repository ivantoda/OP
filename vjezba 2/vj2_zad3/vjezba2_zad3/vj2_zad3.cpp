#include<iostream>
using namespace std;

int& vraca_ref(int niz[], int n)
{
    return niz[n];
}

int main()
{
    int niz1[] = { 1, 3, 4, 2, 5 };
    int n, vr;

    cin >> n;
    vr = vraca_ref(niz1, n) + 1;
    cout << vr;

}