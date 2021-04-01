#pragma once
#include <iostream>

class vektor {
    int log;
    int fiz;
    int* element;
public:
    vektor() : log(0), fiz(0) { std::cout << "defaultkonstr" << std::endl; }
    vektor(int n, int k = 0);
    vektor(const vektor& other);
    ~vektor(); 
    void display_vektor();
    void vektor_push_back(int n);
    void vektor_pop_back();
    int vektor_front();
    int vektor_back();
    int vektor_size();
};