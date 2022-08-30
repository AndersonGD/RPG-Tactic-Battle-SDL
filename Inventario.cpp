#include "Inventario.h"
#include <iostream>


Inventario::Inventario()
{
	qnt = 10;
	slots = 50;
	item = new Slot*[slots];
}


Inventario::~Inventario()
{
}