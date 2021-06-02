
#include"vektori.h"

using std::vector;
using std::string;

using namespace std;

int main() {
    /*
    //Zadatak 1
    vector <int> List1;
    List1 = dodaj(6);
    vector<int> List2 = generiraj(10);
    print_vektor(List1);
    print_vektor(List2);
    //Zadatak 2
    vector<int> List3;
    List3 = spoji(List1, List2);
    print_vektor(List3);
    */
    //Zadatak 3
    /*
    string a = "Ja bih ,ako ikako mogu , ovu recenicu napisala ispravno .";
    a = ispravi(a);
    cout << a;
    */
    //Zadatak 4
    /*list<string> s;
    cout << "Unosite stringove dok ne unesete 0" << endl;
    while (1) {
        string temp;
        cin >> temp;
        if (temp == "0") break;
        s.push_back(temp);
    }
    //s = { "ajme", "nije", "najnajduzi", "nij" };
    cout << broj_znakova(s) << endl;
    cout << prosjecna_duzina(s) << endl;
    izbaci_najduzi(s);
    print_stringove(s);*/
    //Zadatak 5
    v_trokuti a;
    trokut a1(2, 3, 1, 1, 4, 5);
    trokut a2(0, 0, 5, 5, 5, 1);
    trokut a3(0, 0, 10, 10, 9.5, 1);
    a.unos(a1); a.unos(a2); a.unos(a3);
    a.ispis_trokuta();
    trokut max = a.najveci();
    cout<<"Trokut najvece povrsine: "<<endl;
    max.ispistr();
    cout << "Povrsina mu je:" << max.povrsina();

}