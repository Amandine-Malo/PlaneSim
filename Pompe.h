#ifndef _POMPE_H
#define _POMPE_H

#include <iostring>
#include "Tank.h"

class Pompe : public Tank{
	private :
		
	public :
			Pompe();
			~Pompe();
			
			virtual void start();
			virtual void stop();
}

#endif
