#ifndef TELAMAPA_H
#define TELAMAPA_H

#include "Tela.h"

class TelaMapa :public Tela
{
private:
	int indice;
	bool ativou;
	int arrowX;
	int arrowY;
	Sprite arrow;
public:
	TelaMapa();
	~TelaMapa();

	void menu();
	void escolherFase();
	void carregar();
	void set();

	void setAtivou(bool a){ ativou = a; }
	void setIndice(int i){ indice = i; }

	bool getAtivou(){ return ativou; }
	int getIndice(){ return indice; }
};
#endif
