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
	//BONUS QUE DARÃO AO JOGADOR
	int HP;				//pontos de vida
	int SP;				//pontos de habilidade
	int atk;			//ataque
	int def;			//defesa
	int spd;			//velocidade
	int prec;			//precisão
	int eva;			//evasão
	int luck;
	PARTE parte;
	bool MaoDupla;
public:
	Equipamento();
	~Equipamento();
	
	void equipar();
};

