#ifndef INVENTARIO_H
#define INVENTARIO_H

#include "I_Item.h"

class Slot{
public:
	int quantidade;
	int pos;
	I_Item **item;

	Slot(){ 
		quantidade = 10; pos = 0;
		item = new I_Item*[quantidade];
		for (int i = 0; i < quantidade; i++){
			item[i] = 0;
		}
	}
};

class Inventario
{
private:
	int slots;
	int qnt;
	Slot **item;
public:
	Inventario();
	~Inventario();
};
#endif
