#pragma once
#include<iostream>
#include<string>

using namespace std;

class Player{
    string ime_igr;
    int odabir;
    int par_nepar;
public:
    Player() { odabir = 0; par_nepar = 0; };
    Player(string ime, int pn);
    string vime();
    void set_ime(string i);
    int vodabir();
    void set_odabir(int o);
    void set_pn(int o);
    int pn();
    //void pov_rez();
    ~Player() {};
};

class HumanPlayer : public Player {
    //string ime_igraca;
public:
    HumanPlayer() { set_ime("non"); };
    HumanPlayer(string s);
    string ime();
    ~HumanPlayer() {};
};

class ComputerPlayer : public Player {
public:
    ComputerPlayer() { set_ime("Computer"); };
    void Randbroj();
    ~ComputerPlayer() {};
};

class Game : public Player{
public:
    HumanPlayer a1, b1;
    ComputerPlayer c1;
    Game();
    void provjera();
    void provjera1();
    ~Game() {};
};
