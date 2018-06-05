#ifndef TRANSPORTE_H
#define TRANSPORTE_H

#include "Vehiculo.h"

class Transporte : public Vehiculo
{
	public:
		const float PRECIO_ADICIONAL=1.5;
		Transporte();
		Transporte(char matricula[]);
		virtual float calcularPrecio(int dias);
	protected:
};

#endif
