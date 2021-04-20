#include <iostream>
#include <string>
#include<vector>
#pragma once

using namespace std;

class Book {
public:
    string autor;
    string naslov_knjige;
    string godina_izdanja;
    Book();
    Book(string a, string b, string c);
    ~Book();
    void print_book();
};

class HardCopyBook : public Book {
public:
    string broj_stranica;
    HardCopyBook();
    HardCopyBook(string d);
    ~HardCopyBook();
};

class EBook : public Book {
public:
    string ime_datoteke;
    string velicina;
    EBook();
    EBook(string a, string d);
    ~EBook();
};

class Library : public Book {
public:
    Book* niz;
    Library(int d);
    ~Library();
    void niz_naslova(int sz, string  c);
    void ukupna_velicina(int sz, EBook *c, string v);
    void vraca_naslov(string c, int sz);

};