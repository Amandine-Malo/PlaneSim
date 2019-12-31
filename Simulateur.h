#ifndef _SIMULATEUR_H
#define _SIMULATEUR_H

#include <iostring>
using namespace std;

#include "Tank.h"

class Simulateur {
	private :
		Tank tank1;
		Tank tank2;
		Tank tank3;
		
	public :
		Simulateur();
		~Simulateur();
}

#endif
