#ifndef CONSUMIVEL_H
#define CONSUMIVEL_H

#include "Item.h"

class Consumivel : public Item
{
public:
	Consumivel();
	~Consumivel();

	virtual void usar() = 0;
};
#endif
