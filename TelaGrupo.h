#ifndef TELAGRUPO_H
#define TELAGRUPO_H

#include "Tela.h"
#include "I_Formaviva.h"
#include "Player.h"
#include "I_FormaVivaView.h"

class TelaGrupo :public Tela
{
private:
	int arrowX;
	int arrowY;
	Sprite arrow;
	I_FormaVivaView **time;
	I_FormaVivaView **personagens;
public:
	TelaGrupo(I_FormaVivaView**p);
	~TelaGrupo();

	void formarGrupo();
	void desenharPersonagens();
	void carregar();
	void set();
};
#endif
