#ifndef I_FORMAVIVAVIEW_H
#define I_FORMAVIVAVIEW_H

class I_FormaVivaView
{
public:
	I_FormaVivaView();
	~I_FormaVivaView();

	virtual void desenhar() = 0;
	virtual void carregar() = 0;
	virtual void set() = 0;
};
#endif