#include <iostream>
#include "Vehiculo.h"
#include "Transporte.h"
#include "Coche.h"
#include "Microbus.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
/*	Transporte *v1=new Transporte("ABEC");
	Transporte *v= new Transporte ("ABCE");
	cout<<endl<< v1->getM()<<endl;
	cout<<endl<<v->calcularPrecio(1)<<"$"<<endl;
	Coche c("ABES"),c2;
	cout<<endl<<c.getM();
	cout<<endl<< c2.calcularPrecio(10);*/
	Microbus v,v2("ABSE");
	cout<<endl<<v2.getM();
	cout<<endl<<v.calcularPrecio(1);
	
	return 0;
}
