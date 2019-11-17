#ifndef _TANK_H
#define _TANK_H

#include <iostring>
#include "Simulateur.h"

class Tank  : public Simulateur{
	private :
		
	public :
			Tank();
			~Tank();
						
			virtual void start();
			virtual void stop();
}

#endif
