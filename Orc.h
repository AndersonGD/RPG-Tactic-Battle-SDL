#ifndef ORC_H
#define ORC_H

#include "Inimigo.h"

class Orc :
	public Inimigo
{
public:
	Orc();
	~Orc();

	void atacar();
	void habilidade();
};
#endif
