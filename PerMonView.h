#ifndef PERMONVIEW_H
#define PERMONVIEW_H

#include "I_FormaVivaView.h"
#include "libUnicornio.h"

class PerMonView :public I_FormaVivaView
{
protected:
	Sprite sprite;
public:
	PerMonView();
	~PerMonView();
};
#endif
