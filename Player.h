#ifndef PLAYER_H
#define PLAYER_H

#include "Inventario.h"
#include "I_Formaviva.h"
#include "I_FormaVivaView.h"
#include "GuerreiroView.h"
#include "Guerreiro.h"

#define NMAXP 10
class Player
{
private:
	int pers;
	I_Formaviva **personagem;
	I_FormaVivaView **personagemV;
	I_Formaviva **group;
	Inventario *inventario;

	GuerreiroView *gv;
	Guerreiro *warrior;
public:
	Player();
	~Player();

	void personagensIniciais(I_Formaviva *v[]);
	void adicionarPersonagem(I_Formaviva *p);
	void carregar();
	void setar();

	I_Formaviva** Group(int g[]);		//retorna o grupo para a batalha
	I_Formaviva** listaDePersonagens();	//retorna todos os personagens do jogador
	I_FormaVivaView** listaDePersonagensView(); //retorna todos os personagens view do jogador
};
#endif
