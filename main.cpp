#include "Empleados.hpp"
//al objeto Emp se le asigna Age para esto se llama al modificador setEdad y se pasa por parametro Age
#include "VecEmpresa.hpp"
//incluimos VecEmpresa.hpp que es donde se instancia el vector y los metodos requeridos
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
//creamos un metodo PedirDatos y se le pasa por parametro un Empleado
void PedirDatos(Empleados *Emp);

int main(){
	int Dimension = 0;
	int Opcion = 0;
	Empleados Emp;
	//Se instancia el objeto (Obj) como un nuevo VecEmpresa
	VecEmpresa * Obj = new VecEmpresa();

//	Emp.Bienvenida(); //Se llama el metodo Bienvenida, el cual nos da la bienvenida al inciar el algoritmo

	do{ // Se pide al usuario que ingrese el numero de empleados que desea registrar
		cout << "INGRESE EL NUMERO DE EMPLEADOS QUE DESEA REGISTRAR " << endl;
		cin >> Dimension;
	}while( Dimension < 1 );
	Obj->setTam(Dimension);

	//Aqui Llenamos el vector con la informacion del empleado
	for(int i = 0; i < Obj->getTam(); i++){
		cout << " INFORMACION DE EMPLEADO No. " << i+1 << endl;
		PedirDatos(&Emp);
		Obj->setVec(i, Emp);
		//Se pasa por parametro la posicion y el objeto que en este caso es Emp
		system("clear");
	}
	
	do{
	//Se hace un menu para preguntar al usuario que desea hacer con la informacion registrada
		cout << endl;
		cout << "QUE OPCION DESEA REALIZAR" 					<< endl;
		cout << "1. Mostrar empleados registrados" 				<< endl;
		cout << "2. Buscar informacion de un empleado por su identificacion"	<< endl;
		cout << "3. Generar listado de empleados ordenados alfabeticamente" 	<< endl;
		cout << "4. Generar listado de empleados ordenados por edades" 		<< endl;
		cout << "0. Salir de la aplicacion" 					<< endl;
		cin >> Opcion;

		switch(Opcion){
				case 0:{
					system("clear");
					cout << "GRACIA POR UTILIZAR NUESTRO PROGRAMA :D " << endl << endl;
				}
				break;
				case 1:{
					//En el caso 1 muestra los empleados Registrados
					system("clear");
					cout << "\t EMPLEADOS REGISTRADOS " << endl << endl;
					Obj->MostrarDatos();
				}
				break;
				case 2:{
					//En el caso 2 busca la informacion de un empleado pasando por dato de busqueda la Identificacion
					system("clear");
					string Nid;
					cout << "POR FAVOR, INGRESE EL NUMERO DE IDENTIFICACION A BUSCAR : ";
					cin >> Nid;
					Obj->OrdenamientoIntercambio();
					Obj->BusquedaBinaria(Nid);
				}
				break;
				case 3:{
					//En el caso 3 se ordena los nombres ascendentemente
					system("clear");
					cout << "LISTADO DE EMPLEADOS ORDENADOS  POR NOMBRE" << endl << endl;
					Obj->OrdenamientoBurbuja();
					 //Se llama al metodo OrdenamientoBurbuja
					cout << endl <<"LISTADO DE EMPLEADOS ORDENADOS  POR APELLIDO" << endl << endl;
					Obj->OrdenamientoSeleccion();
					//Se llama al metodo OrdenamientoSeleccion
				}
				break;	
				case 4:{
					//En el caso 4 el vector se ordena ascendetemente por edades implementando el metodo de OrdenamientoIntercambioEdades
					system("clear");
					cout << "LISTADO DE EMPLEADOS ORDENADOS POR EDADES" << endl;
					Obj->OrdenamientoIntercambioEdades();
				}
				break;
				default:{
					//Se usa cuando se ingrese una opcion no valida o que no se encuentra dentro de los casos
					system("clear");
					cout << "ERROR... OPCION NO VALIDA" <<  endl;
				}
		}
	}while(Opcion != 0);
return 0;
}

