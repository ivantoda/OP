#pragma once
#include"Game.h"


Player::Player(string a, int par_nep) {
	ime_igr = a;
	odabir = 0;
	par_nepar = par_nep;
}

void Player::set_pn(int a) {
	par_nepar = a;
}

void Player::set_ime(string a) { ime_igr = a; }

void Player::set_odabir(int o) { odabir = o; }

string Player::vime() { return ime_igr; }

int Player::vodabir() { return odabir; }

int Player::pn() { return par_nepar; }

Game::Game(){
	srand(time(NULL));
}

void Game::provjera() {
	if ((a1.vodabir() + b1.vodabir()) % 2 == a1.pn())
		cout << "Pobjednik je " << a1.vime();
	
	else
	
	cout << "Pobjednik je " << b1.vime();
	
}

void Game::provjera1() {
	if((a1.vodabir() + c1.vodabir()) % 2 == a1.pn())
		cout << "Pobjednik je " << a1.vime();

	else

		cout << "Pobjednik je  " << c1.vime();

}

HumanPlayer::HumanPlayer(string s) {
	set_ime(s);
}

string HumanPlayer::ime() {
	return vime();
}

void ComputerPlayer::Randbroj() {
	set_odabir(rand() % 5 + 1);
}