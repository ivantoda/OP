#pragma once
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<list>
#include<iterator>
#include<math.h>
using std::vector;
using std::string;
using namespace std;

class trokut {
    double x1, x2, x3, y1, y2, y3;
public:
    trokut() { x1 = 0; x2 = 0; x3 = 0; y1 = 0; y2 = 0; y3 = 0; };
    trokut(double x1_u , double y1_u , double x2_u, double y2_u , double x3_u , double y3_u ) { x1 = x1_u; x2 = x2_u; x3 = x3_u; y1 = y1_u; y2 = y2_u; y3 = y3_u; };
    void ispistr() {
        cout << " x1: " << x1 << " y1: " << y1 << " x2: " << x2 <<  " y2: " << y2 << " x3: " << x3 << " y3: " << y3 << endl;
    };
    double povrsina() { return abs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2.0; };
};

class v_trokuti : public trokut{
    vector<trokut> arr;
public:
    v_trokuti() {};
    void unos(trokut a) { arr.push_back(a); }
    void ispis_trokuta() { for (int i = 0; i < arr.size(); ++i) { arr[i].ispistr();} }
    trokut najveci() {
        trokut max = arr[0];
        for (int i = 0; i < arr.size(); ++i) {
            if (arr[i].povrsina() > max.povrsina()) max=arr[i];
        }
        return max;
    };
};

vector<int> dodaj(int a) {
    int b;
    vector<int> myVector;
    cout << "Unosite elemente vektora" << endl;
    for (int i = 0; i < a; ++i) {
        cin >> b;
        myVector.push_back(b);
    }
    return myVector;
}

vector <int> generiraj(int m) {
    vector <int> myVector;
    srand((unsigned)time(NULL));
    for (int i = 0; i < m; i++) {
        int b = rand() % 20 + 1;
        myVector.push_back(b);
    }
    return myVector;
}

void print_vektor(vector<int> a) {
    for (int i = 0; i < a.size(); ++i) {
        cout << a[i] << "  ";
    }
    cout << endl;
}

vector<int> spoji(vector<int> List1, vector<int> List2) {
    std::vector<int> List3;
    std::copy_if(List1.begin(), List1.end(), std::back_inserter(List3),
        [&List2](const int& arg)
        { return (std::find(List2.begin(), List2.end(), arg) == List2.end()); });
    return List3;
}

string ispravi(string a) {
    string str1 = " ";
    for (int i = 0; i < a.length(); ++i) {
        if (a[i] == ',' || a[i] == '.')
        {
            if (a[i + 1] != ' ') {
                a.insert(i + 1, str1);
            }
        }
    }
    for (int i = 0; i < a.length(); ++i) {
        if((a[i] == ',' || a[i] == '.') && a[i-1] == ' ')
                a.erase(i - 1, 1);
    }
    return a;
}

int broj_znakova(list<string> a) {
    int br = 0;
    std::list<std::string>::iterator iter;
    for (iter = a.begin(); iter != a.end(); ++iter) {
        br = br + iter->size();
    }
    return br;
}

double prosjecna_duzina(list<string> a) {
    int br = 0, br1 = 0;
    std::list<std::string>::iterator iter;
    for (iter = a.begin(); iter != a.end(); ++iter) {
        br = br + iter->size();
        br1++;
    }
    return double(br / br1);
}

void izbaci_najduzi(list<string>& a) {
    list<string>::iterator iter;
    iter = a.begin();
    string max = *iter;
    iter++;
    for (iter ; iter != a.end(); ++iter) {
        if (max.length() < iter->length())
        {      
            max = *iter;
        }
    }
    a.remove(max);
}

void print_stringove(list<string> a) {
    auto current = a.begin();
    auto last = a.end();
    while (current != last)
    {
        cout << *current << endl;
        ++current;
    }
}