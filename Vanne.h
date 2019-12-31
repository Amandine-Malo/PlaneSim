#ifndef _VANNE_H
#define _VANNE_H

#include <iostream>
using namespace std;

#include "Tank.h"
#include "Moteur.h"

class Vanne {
	private :
		int etat; // 1 : marche, 0 : arrêt, -1 : panne
		Tank t1,t2;
		Moteur m;
	public :
			Vanne();
			Vanne(int);
			Vanne(Tank, Moteur);
			Vanne(Tank, Tank);
			~Vanne();
};

#endif
