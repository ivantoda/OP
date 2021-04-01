#pragma once
#include <iostream>
#include "vektor.h"

vektor::vektor(int n, int k) {
    log = n;
    fiz = log;
    element = new int[n];
    for (int i = 0; i < n; i++) {
        element[i] = k;
    }
    std::cout << "konstr" << std::endl;
}

vektor::vektor(const vektor& other) { 
    std::cout << "copykonstr" << std::endl;
    fiz = other.fiz; 
    log = other.log;
    element = new int[log];
    for (int i = 0; i < other.log; i++) {
        element[i] = other.element[i];
    } 
}

void vektor::display_vektor() {
    for (int i = 0; i < log; i++)
        std::cout << element[i] << std::endl;
    std::cout << "Fizicka velicina: " << fiz << "  Logièka velicina:" << log << std::endl;
}

vektor::~vektor() {
    delete []element;
    std::cout << "destr" << std::endl;
}


void vektor::vektor_push_back(int n) {
    log = log + 1;
    if (log >= fiz) {
        fiz = log * 2;
        element = new int[log * 2];
    }
    element[log - 1] = n;
}

void vektor::vektor_pop_back() {
    if (element) {
        element[log - 1] = NULL;
        log = log - 1;

    }
}

int vektor::vektor_front() {
    return element[0];
}

int vektor::vektor_back() {
    return element[log - 1];
}

int vektor::vektor_size() {
    return log;
}