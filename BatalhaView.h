#ifndef BATALHAVIEW_H
#define BATALHAVIEW_H

#include "I_FormaVivaView.h"

class BatalhaView
{
public:
	BatalhaView();
	~BatalhaView();

	void desenharTime(I_FormaVivaView **time);
	void desenharEnemies(I_FormaVivaView **enemies);
};
#endif
