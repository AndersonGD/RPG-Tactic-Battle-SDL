#include "Player.h"
#include <time.h>
#include <iostream>


Player::Player()
{
	//criação de atributos inicias
	srand(time(NULL));
	pers = 3;
	inventario = new Inventario;

	personagem = new I_Formaviva*[NMAXP];
	for (int i = 0; i < NMAXP; i++){
		personagem[i] = NULL;
	}

	//atribuindo personagens inicais aos personagens do jogador
	warrior = new Guerreiro;
	personagem[0] = warrior;
	//resto

/*--------------------------------------------------------------------------------------------------------------*/

	gv = new GuerreiroView(warrior);
	//criação de array de personagens view
	personagemV = new I_FormaVivaView*[NMAXP];
	for (int i = 0; i < NMAXP; i++){
		personagemV[i] = NULL;
	}

	//atribuição de personagensview para personagens view array
	personagemV[0] = gv;
	//resto
}

Player::~Player()
{
}

void Player::personagensIniciais(I_Formaviva *v[]){
	for (int i = 0; i < 3; i++){
		personagem[i] = v[i];
	}
}

void Player::adicionarPersonagem(I_Formaviva *p){
	personagem[pers] = p;
	pers++;
}

I_Formaviva** Player::Group(int g[]){
	group = new I_Formaviva*[3];

	for (int i = 0; i < 3; i++){
		group[i] = personagem[i];
	}
	return group;
}

I_Formaviva** Player::listaDePersonagens(){
	return personagem;
}

I_FormaVivaView** Player::listaDePersonagensView(){
	return personagemV;
}

void Player::carregar(){
	for (int i = 0; i < 1; i++){
		personagemV[i]->carregar();
	}
}

void Player::setar(){
	for (int i = 0; i < 1; i++){
		personagemV[i]->set();
	}
}