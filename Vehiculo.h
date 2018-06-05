#ifndef VEHICULO_H
#define VEHICULO_H
#include <iostream>
#include <string.h>
using namespace std;
class Vehiculo
{
	
	char matricula[10];
	public:
		const float PRECIO_BASEXDIA = 50;
		
		Vehiculo();
		Vehiculo(char matricula[]);
		~Vehiculo();
		void setM(char matricula[]);
		char *getM();
		virtual	float calcularPrecio(int dias);
		
		
	protected:
};

#endif
