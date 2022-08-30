#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include "I_Formaviva.h"
#include "Equipamento.h"
#include <string>
using namespace std;
#define numEquips 6

enum STATE{
	IDLE,
	SELECTED,
	ATACKIN,
	SPECIAL,
	DEFENDING,
	UITEM,
	DEAD
};
class Personagem : public I_Formaviva
{
protected:
	string name;		//nome
	int hp;				//pontos de vida
	int sp;				//pontos de habilidade
	int atk1;			//ataque minimo
	int atk2;			//ataque maximo
	int def;			//defesa
	int spd;			//velocidade
	int prec;			//precisão
	int eva;			//evasão
	int luck;			//sorte
	STATE anima;
	bool vivo;
	bool acao;
	Equipamento **equip;
public:
	Personagem();
	~Personagem();

	virtual void equipar();
	virtual void usarItem();

	//TO DO:
	void setName(string n){ name = n; }
	void setHP(int HP){ hp = HP; }
	void setSP(int SP){ sp = SP; }
	void setATK1(int ATK){ atk1 = ATK; }
	void setATK2(int ATK){ atk2 = ATK; }
	void setDEF(int DEF){ def = DEF; }
	void setSPD(int SPD){ spd = SPD; }
	void setPREC(int PREC){ prec = PREC; }
	void setEVA(int EVA){ eva = EVA; }
	void setLUCK(int LUCK){ luck = LUCK; }
	void setSTATE(STATE ANIMA){ anima = ANIMA; }
	void setVivo(bool v){ vivo = v; }
	void setAcao(bool a){ acao = a; }

	string getName(){ return name; }
	int getHP(){ return hp; }
	int getSP(){ return sp; }
	int getATK1(){ return atk1; }
	int getATK2(){ return atk2; }
	int getDEF(){ return def; }
	int getSPD(){ return spd; }
	int getPREC(){ return prec; }
	int getEVA(){ return eva; }
	int getLUCK(){ return luck; }
	STATE getSTATE(){ return anima; }
	bool getVivo(){ return vivo; }
	bool getAcao(){ return acao; }
};
#endif
