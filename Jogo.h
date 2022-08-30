#pragma once
#include "libUnicornio.h"
#include "Controle.h"
class Jogo
{
private:
	Controle control;
public:
	Jogo();
	~Jogo();

	void inicializar();
	void finalizar();

	void executar();
};

