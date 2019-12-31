#ifndef _SIMULATEUR_H
#define _SIMULATEUR_H

#include <iostream>
using namespace std;

#include "Tank.h"
#include "Moteur.h"
#include "Vanne.h"

class Simulateur {
	private :
		Tank tank1,tank2,tank3;
		Moteur M1,M2,M3;
		Vanne VT12, VT23;
		Vanne V12, V13, V23;
		
	public :
		Simulateur();
		~Simulateur();
};

#endif
