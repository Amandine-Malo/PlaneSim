#ifndef _POMPE_H
#define _POMPE_H

#include <iostream>
using namespace std;

class Pompe {
	private :
		bool etat;
	public :
			Pompe(); //initialisé en arrêt
			Pompe(bool x);
			~Pompe();
};

#endif
