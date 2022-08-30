#ifndef I_TELA_H
#define I_TELA_H
class I_Tela
{
public:
	I_Tela();
	~I_Tela();

	virtual void carregar() = 0;
	virtual void set() = 0;
};
#endif
