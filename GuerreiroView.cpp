#include "GuerreiroView.h"


GuerreiroView::GuerreiroView(Guerreiro *g)
{
	guerreiro = new Guerreiro;
	guerreiro = g;
	
	
}


GuerreiroView::~GuerreiroView()
{
}

void GuerreiroView::desenhar(){
	sprite.avancarAnimacao();
	sprite.desenhar(85, 460);
	if (!guerreiro->getAcao()){
		sprite.setAnimacao(0);
	}
	else{
		if (guerreiro->getSTATE() == IDLE){
			sprite.setAnimacao(1);
		}
	}
	
}

void GuerreiroView::carregar(){
	recursos.carregarSpriteSheet("Guerreiro", "dados/images/personagens/warrior.png",7,12);
}

void GuerreiroView::set(){
	sprite.setSpriteSheet("Guerreiro");
	recursos.getSpriteSheet("Guerreiro")->setNumFramesDaAnimacao(0, 4);
	recursos.getSpriteSheet("Guerreiro")->setNumFramesDaAnimacao(1, 6);
	recursos.getSpriteSheet("Guerreiro")->setNumFramesDaAnimacao(2, 10);
}