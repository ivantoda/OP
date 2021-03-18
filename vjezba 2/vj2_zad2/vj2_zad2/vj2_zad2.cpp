#include<iostream>
using namespace std;
struct kruznica
{
    int x;
    int y;
    int r;
};

struct pravokutnik
{
    int x;
    int y;
    int duzina;
    int visina;
};

int brojprav(struct pravokutnik pr[10], struct kruznica kr, int n) {
        int broj = 0;
        for (int i = 0; i < n; i++) {
            int provx = kr.x, provy = kr.y;
            int razlx, razly;
            if (kr.x < pr[i].x) provx = pr[i].x;
            else if (kr.x > pr[i].x + pr[i].duzina) provx = pr[i].x + pr[i].duzina;
            if (kr.y < pr[i].y) provy = pr[i].y;
            else if (kr.y > pr[i].y + pr[i].visina) provy = pr[i].y + pr[i].visina;

            razlx = kr.x - provx;
            razly = kr.y - provy;

            int ud = sqrt((razlx * razlx) + (razly * razly));

            if (ud <= kr.r) {
                broj++;
            }
        }
        return broj;
}

int main() {
    struct pravokutnik pr[10];
    struct kruznica kr;
    int n, i;
    cout << "Unesite broj pravokutnika (manje od 10)";
    cin >> n;
    for (i = 0; i < n; i++) {

        cout << "x \n";
        cin >> pr[i].x;
        cout << "y \n";
        cin >> pr[i].y;
        cout << "duzina \n";
        cin >> pr[i].duzina;
        cout << "visina \n";
        cin >> pr[i].visina;
    }
    cout << "x, y, r?\n";
    cin >> kr.x;
    cin >> kr.y;
    cin >> kr.r;

    cout << "\nBroj pravokutnika koji sijeku kruznicu je " << brojprav(pr, kr, n);
}