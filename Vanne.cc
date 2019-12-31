#include "Vanne.h"

Vanne::Vanne(){etat = 0;}

Vanne::Vanne(int x) {etat = x;}

Vanne::Vanne(Tank t1, Tank t2){
	etat = 0;
	this->t1 = t1;
	this->t2 = t2;
}
	
Vanne::Vanne(Tank t, Moteur m){
	etat = 0;
	this->t1 = t;
	this->m = m;
}

Vanne::~Vanne(){}

