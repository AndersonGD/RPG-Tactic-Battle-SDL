#include "Guerreiro.h"
#include <string>
using namespace std;
#include <time.h>


Guerreiro::Guerreiro()
{
	setName("Ares");
	setHP(100);
	setSP(30);
	setATK1(30);
	setATK2(45);
	setDEF(40);
	setSPD(15);
	setPREC(30);
	setEVA(20);
	setLUCK(10);
	setSTATE(IDLE);
	vivo = true;
	acao = false;
	equip = new Equipamento*[numEquips];
	for (int i = 0; i < numEquips;i++){
		equip[i] = NULL;
	}
}

Guerreiro::~Guerreiro()
{
}

void Guerreiro::habilidade(){
	hp -= 20;
	sp -= 10;
	return atk2 * 3;
}

void Guerreiro::defender(){
	1 + 1;
}

void Guerreiro::equipar(){
	1 + 2;
}

void Guerreiro::usarItem(){
	3 + 1;
}