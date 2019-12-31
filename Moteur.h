#ifndef _MOTEUR_H
#define _MOTEUR_H

#include <iostream>
using namespace std;

#include "Tank.h"

class Moteur {
	private :
		Tank tank;
	public : 
		Moteur();
		~Moteur();
};

#endif

