#ifndef TELA_H
#define TELA_H

#include "libUnicornio.h"
#include "I_Tela.h"

class Tela : public I_Tela
{
protected:
	Sprite background;
public:
	Tela();
	~Tela();
};
#endif
