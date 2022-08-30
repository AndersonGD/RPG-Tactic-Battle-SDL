#pragma once
enum PARTE{
	CABECA,
	TRONCO,
	MAOD,
	MAOE,
	PERNAS,
	PES
};
class Equipamento
{
protected:
	//BONUS QUE DAR�O AO JOGADOR
	int HP;				//pontos de vida
	int SP;				//pontos de habilidade
	int atk;			//ataque
	int def;			//defesa
	int spd;			//velocidade
	int prec;			//precis�o
	int eva;			//evas�o
	int luck;
	PARTE parte;
	bool MaoDupla;
public:
	Equipamento();
	~Equipamento();
	
	void equipar();
};

