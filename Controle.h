#ifndef CONTROLE_H
#define CONTROLE_H

#include "Batalha.h"
#include "Player.h"
#include "Guerreiro.h"
#include "TelaGrupo.h"
#include "GuerreiroView.h"
#include "I_FormaVivaView.h"
#include "TelaInicial.h"
#include "I_Tela.h"
#include "TelaMapa.h"


enum TELA{
	INICIAL,
	LOAD,
	CREDITOS,
	INSTRUCOES,
	MAPA,
	INVENTARIO,
	GRUPO,
	BATALHA
};
class Controle
{
private:
	int numFases;
	Player *jogador;
	Batalha **battle;
	

	TELA tela;
	TelaInicial *tela_inicial;
	TelaMapa *tela_mapa;
	I_Tela **itela;
	TelaGrupo *tela_grupo;
public:
	Controle();
	~Controle();

	void carregar();
	void setar();

	void batalhar(int fase);
	void formarGrupo();
	void atualizarPlayer();

	void jogar();
	void inicial();
	void mapa();
	void grupo();
};
#endif
