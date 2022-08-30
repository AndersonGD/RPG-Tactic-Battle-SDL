#include "TelaInicial.h"


TelaInicial::TelaInicial()
{
	indice = 0;
	ativou = false;
	arrowX = 360;
	arrowY = 100;
}


TelaInicial::~TelaInicial()
{
}

void TelaInicial::escolha(){
	background.desenhar(512, 384);
	jogar.desenhar(512,100);
	inst.desenhar(512, 300);
	cred.desenhar(512, 500);
	sair.desenhar(512, 700);
	arrow.desenhar(arrowX, arrowY);
	if (teclado.pressionou[TECLA_BAIXO]){
		indice++;
		arrowY += 200;
	}
	else if (teclado.pressionou[TECLA_CIMA]){
		indice--;
		arrowY -= 200;
	}

	if (indice < 0){
		indice = 0;
		arrowY = 100;
	}
	else if (indice > 3){
		indice = 3;
		arrowY = 700;
	}
	if (teclado.pressionou[TECLA_Z]){
		ativou = true;
	}
}

void TelaInicial::carregar(){
	recursos.carregarSpriteSheet("botao_jogar", "dados/images/hud/jogar.png", 3, 1);
	recursos.carregarSpriteSheet("botao_inst", "dados/images/hud/instrucoes.png", 3, 1);
	recursos.carregarSpriteSheet("botao_cred", "dados/images/hud/creditos.png", 3, 1);
	recursos.carregarSpriteSheet("botao_sair", "dados/images/hud/sair.png", 3, 1);
	recursos.carregarSpriteSheet("arrow", "dados/images/hud/arrow.png", 1, 1);
	recursos.carregarSpriteSheet("bg_inicial", "dados/images/backgrounds/inicial.png", 1, 1);
}

void TelaInicial::set(){
	jogar.setSpriteSheet("botao_jogar");
	inst.setSpriteSheet("botao_inst");
	cred.setSpriteSheet("botao_cred");
	sair.setSpriteSheet("botao_sair");
	arrow.setSpriteSheet("arrow");
	background.setSpriteSheet("bg_inicial");
}