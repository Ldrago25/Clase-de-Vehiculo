#include "Microbus.h"

Microbus::Microbus()
{
}

	Microbus::Microbus(char matricula[]):Transporte(matricula){
		
	}
	
	float Microbus::calcularPrecio(int dias){
		return PRECIO_ADIC + Transporte::calcularPrecio(dias);
	}
