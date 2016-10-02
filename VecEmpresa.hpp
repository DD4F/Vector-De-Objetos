#ifndef VECEMPRESA_HPP
#define VECEMPRESA_HPP
#include "Empleados.hpp"
#include <iostream>
#include <string>

using namespace std;

class VecEmpresa{
		//Se crea la clase VecEmpres, esta clase va almacenar los Objetos de la clase Empleados
	private:
		Empleados* Vec;
		//Se define Vec, que seria el vector dinamico, con tipo de dato Empleados
		Empleados Emp;
		//Se dfine Emp, que seria el empleado, del tipo de datos Empleados
		int Tam;
	public:
		VecEmpresa();
		//Constructor
		virtual ~VecEmpresa();
		//Destructor
		void setVec(int, Empleados );
		//metodo modificador del vector, el cual se pasa por parametro un entero para la posicion y un Empleado
		void setTam(int);
		//metodo odificador para el tamaño del vector, se pasa por parametro un entero
		Empleados getVec(int);
		//metodo selector del vector el cual va a retornar un Empleado en la posicion del numero el cual se pasa por parametro
		int getTam();
		//metodo selector del tamaño del vector
		void MostrarDatos();
		//metodo para mostrar los datos registrados en el vector
		void OrdenamientoIntercambio();
		 //metodo para ordenar el vector
		void BusquedaBinaria(string);
		//metodo de busqueda, el cual cual busca informacion de un empleado pasando por parametro un string
		void OrdenamientoBurbuja();
		 //metodo para odenar el vector, usando ordenamiento por burbuja
		void OrdenamientoSeleccion();
		 //metodo que ordena el vector por el metodo de ordenamiento por Seleccion
		void OrdenamientoIntercambioEdades();
		//en este metodo se ordena el vector por edades, usando el metodo de ordenamiento por intercambio
};
#endif 
