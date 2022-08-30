#include "BatalhaView.h"


BatalhaView::BatalhaView()
{
}


BatalhaView::~BatalhaView()
{
}

void BatalhaView::desenharTime(I_FormaVivaView **time){
	for (int i = 0; i < 3; i++){
		time[i]->desenhar();
	}
}

void BatalhaView::desenharEnemies(I_FormaVivaView **enemies){
	for (int i = 0; i < 3; i++){
		enemies[i]->desenhar();
	}
}