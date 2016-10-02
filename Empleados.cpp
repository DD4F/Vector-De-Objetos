#include "Empleados.hpp"
#include <iostream>
#include <string>
#include <unistd.h>
#include <cstdio>
#include <cstdlib>

using namespace std;


void Empleados::setNombres(string Info){
//en este metodo modificador la variable Nombres toma el valor del parametro Info
	Nombres = Info;
}
string Empleados::getNombres(){
//en el metodo selector se retorna el valor almacenado en Nombres
	return Nombres;
}

void Empleados::setApellidos(string Info){
//en este metodo modificador la variable Apellidos toma el valor del parametro Info
	Apellidos = Info;
}
string Empleados::getApellidos(){
 //el metodo retorna lo que tiene asignado la variable Apellidos
	return Apellidos;
}

void Empleados::setIdentificacion(string Dato){
//en este metodo modificador la variable Identificacion toma el valor del parametro Dato
	Identificacion = Dato;
}
string Empleados::getIdentificacion(){
 //el metodo retorna lo que tiene asignado la variable Identificacion
	return Identificacion;
}

void Empleados::setCelular(string Dato){
//en este metodo modificador la variable Celular toma el valor del parametro Dato
	Celular = Dato;
}
string Empleados::getCelular(){
//el metodo retorna lo que tiene asignado la variable Celular
	return Celular;
}

void Empleados::setEdad(int Dato){
//en este metodo modificador la variable Edad toma el valor del parametro Dato
	Edad = Dato;
}
int Empleados::getEdad(){
 //el metod retorna lo que tiene asignado la variable Edad
	return Edad;
}

void Empleados::setCiudad(string Dato){
//en este metodo modificador la variable Ciudad toma el valor del parametro Dato
	Ciudad = Dato;
}
string Empleados::getCiudad(){
//el metodo retorna lo que tiene asignado la variable Edad
	return Ciudad;
}

void Empleados::Bienvenida(){
	cout << "\t ######################################## " << endl;
	cout << "\t # B";
	fflush(stdout);
	sleep(1);
	cout << "I";
	fflush(stdout);
	sleep(1);
	cout << "E";
	fflush(stdout);
	sleep(1);
	cout << "N";
	fflush(stdout);
	sleep(1);
	cout << "V";
	fflush(stdout);
	sleep(1);
	cout << "E";
	fflush(stdout);
	sleep(1);
	cout << "N";
	fflush(stdout);
	sleep(1);
	cout << "I";
	fflush(stdout);
	sleep(1);
	cout << "D";
	fflush(stdout);
	sleep(1);
	cout << "O";
	fflush(stdout);
	sleep(1);
	cout << " A";
	fflush(stdout);
	sleep(1);
	cout << "L";
	fflush(stdout);
	sleep(1);
	cout << " R";
	fflush(stdout);
	sleep(1);
	cout << "E";
	fflush(stdout);
	sleep(1);
	cout << "G";
	fflush(stdout);
	sleep(1);
	cout << "I";
	fflush(stdout);
	sleep(1);
	cout << "S";
	fflush(stdout);
	sleep(1);
	cout << "T";
	fflush(stdout);
	sleep(1);
	cout << "R";
	fflush(stdout);
	sleep(1);
	cout << "O";
	fflush(stdout);
	sleep(1);
	cout << " D";
	fflush(stdout);
	sleep(1);
	cout << "E";
	fflush(stdout);
	sleep(1);
	cout << " E";
	fflush(stdout);
	sleep(1);
	cout << "M";
	fflush(stdout);
	sleep(1);
	cout << "P";
	fflush(stdout);
	sleep(1);
	cout << "L";
	fflush(stdout);
	sleep(1);
	cout << "E";
	fflush(stdout);
	sleep(1);
	cout << "A";
	fflush(stdout);
	sleep(1);
	cout << "D";
	fflush(stdout);
	sleep(1);
	cout << "O";
	fflush(stdout);
	sleep(1);
	cout << "S  #" << endl;
	cout << "\t ######################################## " << endl;
}
