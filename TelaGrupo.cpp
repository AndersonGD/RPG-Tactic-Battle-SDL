#include "TelaGrupo.h"


TelaGrupo::TelaGrupo(I_FormaVivaView**p)
{
	time = new I_FormaVivaView*[3];
	personagens = new I_FormaVivaView*[10];

	for (int i = 0; i < 3; i++){
		time[i] = NULL;
	}

	for (int i = 0; i < 3; i++){
		personagens[i] = NULL;
	}

	for (int i = 0; i < 10; i++){
		personagens[i] = p[i];
	}


	arrowX = 100;
	arrowY = 50;
}


TelaGrupo::~TelaGrupo()
{

}

void TelaGrupo::desenharPersonagens(){
	background.desenhar(512, 384);
	arrow.desenhar(arrowX, arrowY);
	personagens[0]->desenhar();
}

void TelaGrupo::carregar(){
	recursos.carregarSpriteSheet("bg_grupo", "dados/images/backgrounds/grupo.png", 1, 1);
}

void TelaGrupo::set(){
	background.setSpriteSheet("bg_grupo");
	arrow.setSpriteSheet("arrow");
}

void TelaGrupo::formarGrupo(){

}