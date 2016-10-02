#ifndef EMPLEADOS_HPP
#define EMPLEADOS_HPP
#include <iostream>
#include <string>

using namespace std;

class Empleados{
	private:
		//Se declara Nombres como string
		string Nombres;
 		//Se declara Apellidos como string
		string Apellidos;
		//Se declara Identificacion como string
		string Identificacion;
		//Se declara Celular como string
		string Celular;
		//Se declara Edad como entero
		int Edad;
		 //Se declara Ciudad como string
		string Ciudad;
	public:
		void setNombres(string);
		//se define metodo modificador de Nombres y se pasa por parametro un string
		void setApellidos(string);
		//se define metodo modificador de Apellidos y se pasa por parametro un string
		void setIdentificacion(string);
		//se define metodo modificador de Identificacion y se pasa por parametro un string
		void setCelular(string);
		//se define metodo modificador de Celular y se pasa por parametro un string
		void setEdad(int);
		//se define metodo modificador de Edad y se pasa por parametro un entero
		void setCiudad(string);
		//se define metodo selector de Nombres el cual va retornar un string
		string getNombres();
		//se define metodo selector de Apellidos el cual va retornar un string
		string getApellidos();
		//se define metodo selector de Identificacion el cual va retornar un string
		string getIdentificacion();
		//se define metodo selector de Celular el cual va retornar un string
		string getCelular();
		//se define metodo selector de Edad el cual va retornar un entero
		int getEdad();
		//se define metodo selector de Ciudad el cual va retornar un string	
		string getCiudad();
		//se define un metodo Bienvenida el cual dara un mensaje de bienvenida
		void Bienvenida();
};
#endif 
