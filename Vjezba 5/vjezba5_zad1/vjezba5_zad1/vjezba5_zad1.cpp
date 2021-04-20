#include <iostream>
#include "knjiga.h"
#include <fstream>
#include<vector>

using namespace std;

int velicina() {
    int size_arr = 0;
    string line;
    ifstream myfile("knjige.txt");
    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            size_arr++;
        }
        myfile.close();
    }

    else cout << "Unable to open file";

    return size_arr;
}

bool str_mb(string t) {
    if((t[t.length() - 2] + t[t.length() - 1] == 'M' + 'B'))
        return true;
    return false;
}

bool str_pdf(string t) {
    if (t[t.length() - 4] + t[t.length() - 3] + t[t.length() - 2] + t[t.length() - 1] == '.' + 'p' + 'd' + 'f')
        return true;
    return false;
}

void prov1(vector <string> l, Library& a, HardCopyBook* b, EBook* c) {
    int k1 = 0, k2 = 0;
    int zas = 0;
    string t = "";
    for (int j = 0; j < l.size(); j++)
    {
        l[j].erase(l[j].find_last_not_of(" \n\r\t") + 1);
        for (int i = 0; i <= l[j].length(); i++) {
            if (l[j][i] != ';' && i != l[j].length())
                t = t + l[j][i];
            else
            {
                if (zas == 0) {
                    a.niz[j].autor = t;
                    c[j].autor = t;
                    b[j].autor = t;
                    zas++;
                }
                else if (zas == 1) {
                    a.niz[j].naslov_knjige = t;
                    c[j].naslov_knjige = t;
                    b[j].naslov_knjige = t;
                    zas++;
                }
                else if (zas == 2) {
                    if (str_pdf(t)) {
                        c[j].ime_datoteke = t;
                    }
                    else {
                        b[j].broj_stranica = t;
                    }
                    zas++;
                }
                else if (zas == 3) {
                    c[j].velicina = t;
                }
                t = "";
            }
        }
        zas = 0;
    }
}


int main()
{
    int sz = velicina();
    vector <string> datot;
    HardCopyBook *c = new HardCopyBook[sz];
    EBook *e = new EBook[sz];
    Library a(sz);
    string line;
    ifstream myfile("knjige.txt");
    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            datot.push_back(line);
        }
        myfile.close();
    }
    prov1(datot, a, c, e);
   
    a.niz_naslova(sz, "Aldous Huxley");
    a.ukupna_velicina(sz,e,"Hideo Nitta, Keita Takatsu");
    a.vraca_naslov("Man", sz);
    
}

