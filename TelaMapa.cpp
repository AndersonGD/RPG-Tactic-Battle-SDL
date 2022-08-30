#include "TelaMapa.h"


TelaMapa::TelaMapa()
{
	ativou = false;
	arrowX = 70;
	arrowY = 400;
	indice = 0;
}


TelaMapa::~TelaMapa()
{
}


void TelaMapa::carregar(){
	recursos.carregarSpriteSheet("bg_mapa", "dados/images/backgrounds/mapa.png", 1, 1);
}

void TelaMapa::set(){
	background.setSpriteSheet("bg_mapa");
	arrow.setSpriteSheet("arrow");
}

void TelaMapa::escolherFase(){
	background.desenhar(512, 384);
	arrow.desenhar(arrowX, arrowY);

	//tratamento de teclado e indices
	if (teclado.pressionou[TECLA_BAIXO]){
		indice = 1;
		arrowX = 150;
		arrowY = 650;
	}

	if (teclado.pressionou[TECLA_CIMA] && indice == 1){
		indice = 0;
		arrowX = 70;
		arrowY = 400;
	}

	//se pressionou Z para entrar
	if (teclado.pressionou[TECLA_Z]){
		ativou = true;
	}
}

void TelaMapa::menu(){

}