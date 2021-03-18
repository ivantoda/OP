#include <iostream>
using namespace std;

struct vektor {
    int log;
    int fiz;
    int *element;
};

vektor vector_new(vektor &v1,int a, int b) {
    v1.fiz = a;
    v1.log = b;
    if (b <= a)
        v1.element = new int[v1.fiz * 2];
    else
        v1.element = new int[v1.fiz];
    for(int i = 0; i < v1.log; i++){
        v1.element[i] = i;
    }
    return v1;
}

void vector_delete(vektor & v1) {
    v1.fiz = NULL;
    v1.log = NULL;
    delete[] v1.element;
}

void vector_push_back(vektor &v1, int n) {
    v1.log = v1.log + 1;
    if (v1.log >= v1.fiz)
        v1.element = new int[v1.fiz * 2];
    v1.element[v1.log-1] = n;
}

void vector_pop_back(vektor& v1) {
    v1.element[v1.log - 1] = NULL;
    v1.log = v1.log - 1;
}

int vector_front(const vektor& v1) {
    return v1.element[0];
}

int vector_back(const vektor& v1) {
    return v1.element[v1.log-1];
}

void display_vector(const vektor& v1) {
    for (int i = 0; i < v1.log; i++)       
        cout << v1.element[i] << endl;
    cout <<"Fizicka velicina: "<< v1.fiz <<"  Logièka velicina:"<< v1.log << endl;
}

int vector_size(const vektor &v1){
    return v1.log;
}

int main()
{  
    vektor a;
    a = vector_new(a, 10, 4);
    //display_vector(a);
    //vector_delete(a);
    //display_vector(a);
    //vector_pop_back(a);
    //display_vector(a);
    //vector_front(a);
    //vector_back(a);
    cout << vector_size(a)<<endl;
}