#ifndef INIMIGO_H
#define INIMIGO_H

#include "I_Formaviva.h"
#include <string>
using namespace std;

class Inimigo :public I_Formaviva
{
protected:
	string name;		//nome
	short HP;			//pontos de vida
	short atk;			//ataque
	short def;			//defesa
	short spd;			//velocidade
	short prec;			//precisão
	short eva;			//evasão
public:
	Inimigo();
	~Inimigo();

	virtual void atacar() = 0;
	virtual void habilidade() = 0;
	//TO DO:
	//sets
	//gets
};
#endif
