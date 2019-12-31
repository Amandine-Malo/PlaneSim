#ifndef _TANK_H
#define _TANK_H

#include <iostream>
using namespace std;

#include "Pompe.h"

class Tank {
	private :
		Pompe primaire;
		Pompe secours;
	public :
			Tank();
			~Tank();
};

#endif
