#ifndef GUERREIROVIEW_H
#define GUERREIROVIEW_H

#include "PerMonView.h"
#include "Guerreiro.h"

class GuerreiroView: public PerMonView
{
private:
	Guerreiro *guerreiro;
public:
	GuerreiroView(Guerreiro *g);
	~GuerreiroView();

	void desenhar();
	void carregar();
	void set();
};
#endif
