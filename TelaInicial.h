#ifndef TELAINICIAL_H
#define TELAINICIAL_H

#include "Tela.h"
class TelaInicial :public Tela
{
private:
	int indice;
	bool ativou;
	int arrowX;
	int arrowY;
	Sprite jogar;
	Sprite inst;
	Sprite cred;
	Sprite sair;
	Sprite arrow;
public:
	TelaInicial();
	~TelaInicial();

	void escolha();
	void carregar();
	void set();

	void setAtivou(bool a){ ativou = a; }
	bool getAtivou(){ return ativou; }
	int getIndice(){ return indice; }
};
#endif
