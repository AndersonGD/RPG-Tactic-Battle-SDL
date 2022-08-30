#ifndef GUERREIRO_H
#define GUERREIRO_H

#include "Personagem.h"

class Guerreiro :
	public Personagem
{
public:
	Guerreiro();
	~Guerreiro();
	
	void habilidade();
	void defender();
	void equipar();
	void usarItem();

};
#endif
