#ifndef BATALHA_H
#define BATALHA_H

#include "I_Formaviva.h"
#include "Wave.h"
#include "BatalhaView.h"

#define numW 3
class Batalha
{
private:
	bool round;
	BatalhaView *BV;
	I_Formaviva **time;
	Wave **wave;
public:
	Batalha();
	~Batalha();

	void acao();
	int sequencia();
	void desenhar();
};
#endif
