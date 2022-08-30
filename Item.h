#ifndef ITEM_H
#define ITEM_H

#include "I_Item.h"
#include <string>
using namespace std;

class Item : public I_Item
{
protected:
	string name;
	string description;
	int id;
public:
	Item();
	~Item();

	virtual void usar() = 0;
};
#endif
