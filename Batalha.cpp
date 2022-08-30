#include "Batalha.h"

Batalha::Batalha()
{
	BV = new BatalhaView;
	round = false;
	time = new I_Formaviva*[3];
	wave = new Wave*[numW];
}


Batalha::~Batalha()
{
}

void Batalha::acao(){
	if (!round){
		sequencia();
	}
}

int Batalha::sequencia(){
	return 0;
}

void Batalha::desenhar(){
//	BV->desenharTime();
	//BV->desenharEnemies();

	//tela de batalha desenhar
	//wave desenhar
	//time desenhar
}