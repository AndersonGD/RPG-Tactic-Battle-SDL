#include "Controle.h"


Controle::Controle()
{
	//atributos iniciais
	tela = INICIAL;
	numFases = 10;

	jogador = new Player;
	

	//criação de array de interface e atribuições para dentro do arrray
	itela = new I_Tela*[10];
	tela_inicial = new TelaInicial;
	tela_mapa = new TelaMapa;
	tela_grupo = new TelaGrupo(jogador->listaDePersonagensView());

	itela[0] = tela_inicial;
	itela[1] = tela_mapa;
	itela[2] = tela_grupo;
	battle = new Batalha*[numFases];

}


Controle::~Controle()
{
}

//escolher fase

void Controle::formarGrupo(){
	tela_grupo->desenharPersonagens();
}

void Controle::batalhar(int fase){
	battle[fase]->acao();
}

void Controle::atualizarPlayer(){

	jogador->listaDePersonagens();
}

void Controle::jogar(){
	switch (tela){
	case INICIAL:
		inicial();
		break;
	case LOAD:
		tela = MAPA;
		break;
	case CREDITOS:

		break;
	case INSTRUCOES:

		break;
	case MAPA:
		mapa();
		break;
	case INVENTARIO:

		break;
	case GRUPO:
		grupo();
		break;
	case BATALHA:

		break;
	}
}

void Controle::inicial(){
	int a = -1;
	tela_inicial->escolha();
	if (tela_inicial->getAtivou()){
		a = tela_inicial->getIndice();
		switch (a){
		case 0:
			tela = LOAD;
			break;
		case 1:
			tela = INSTRUCOES;
			break;
		case 2:
			tela = CREDITOS;
			break;
		case 3:
			exit(0);
		}
	}
	
}

void Controle::mapa(){
	int a = -1;
	tela_mapa->escolherFase();
	if (tela_mapa->getAtivou()){

		tela = GRUPO;

	}
}

void Controle::grupo(){
	formarGrupo();

}








void Controle::carregar(){
	jogador->carregar();
	for (int i = 0; i < 3; i++){
		itela[i]->carregar();
	}
}

void Controle::setar(){
	jogador->setar();
	for (int i = 0; i < 3; i++){
		itela[i]->set();
	}
}