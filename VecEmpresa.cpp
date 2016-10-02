#include "Empleados.hpp"// se incluye el archivo .hpp para poder implementar lo instanciado en este.
#include "VecEmpresa.hpp"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


VecEmpresa::VecEmpresa(){
	Vec = NULL;
	//Se incializa el vector en NULL
}
VecEmpresa::~VecEmpresa(){
	if(Vec){
		delete[] Vec;
		//en el contructor se elimina de memoria el vector
	}
}

void VecEmpresa::setTam(int Dato){
	Tam = Dato;
	 //Tam toma el valor del parametro Dato
	Vec = new Empleados[Tam];
	//Se crea el nuevo vector de tipo Empleados con Tamaño Tam
}
int VecEmpresa::getTam(){
	return Tam;
	//el metodo selector retorna el Tamaño
}

void VecEmpresa::setVec(int Pos, Empleados Info){
	//Al vector en la posicion Pos que es un entero, se le asigna Info que es la informacion del empleado
	Vec[Pos] = Info;
}
Empleados VecEmpresa::getVec(int Pos){
	 //se retorna la informacion de un empleado en la posicion Pos
	return Vec[Pos];
}

void VecEmpresa::MostrarDatos(){
	//Este es el metodo para mostrar los datos
	//este ciclo se usa para recorrer el vector y asi mostrar la informacion en cada posicion
	for(int i = 0; i < getTam(); i++){
	cout << "##############################################################"<< endl;
	cout << "NOMBRE 		: " 	<< getVec(i).getNombres() 	<< endl;
	cout << "APELLIDOS 	: " 		<< getVec(i).getApellidos() 	<< endl;
	cout << "IDENTIFICACION 	: "	<< getVec(i).getIdentificacion()<< endl;
	cout << "CIUDAD 		: "	<< getVec(i).getCiudad() 	<< endl;
	cout << "CELULAR 	: "		<< getVec(i).getCelular() 	<< endl;
	cout << "EDAD 		: "		<< getVec(i).getEdad() 		<< endl;
	cout << "##############################################################"<< endl;
	}
}

void VecEmpresa::OrdenamientoIntercambio(){
	//Se ordena el vector de menor a mayor Por numero de identificacion, usando el metodo de ordenamiento por Intercambio
	Empleados Temp;
	for(int i = 0; i < getTam(); i++){
		for( int j = i+1; j < getTam(); j++){
			if(Vec[i].getIdentificacion() > Vec[j].getIdentificacion()){
				Temp = Vec[i];
				Vec[i] = Vec[j];
				Vec[j] = Temp;
			}
		}
	}	
}

void VecEmpresa::BusquedaBinaria(string ID){
	int Posicion, Primero, Ultimo, Centro;              		//Declaramos nuestras variables necesarias para la busqueda
	Primero = 0;                                        		//nuestro primer valor del vector
	Ultimo = getTam() - 1;                              		//ultima posicion del vector
	Posicion = -1;                                      		//POsicion le asignamos -1 ya que esta poscion no existe

	while( (Primero <= Ultimo) && (Posicion == -1) ){   		//mientras se cumpla esta condicion hacer
		Centro = (Primero + Ultimo)/2;                  	//ubicamos el centro del vector como pivote
		if( Vec[Centro].getIdentificacion()  == ID ){              	//si el valor en la posicion centro es igual a Nid
			Posicion = Centro;                        	//Le asignamos a Posicion nuestro valor centro
		}else{                                          	//Si no
			if( ID < Vec[Centro].getIdentificacion() ){        	//Si Nid es menor que nuestro valor en la posicion centro
				Ultimo = Centro - 1;                    // Entonces ultimo sera igual a centro - 1
			}else{                                      	//Si no
				Primero = Centro + 1;                   //Entonces Primero es igual a centro + 1
			}
		}
	}

	if( Posicion == -1){                                            //Ahora si posision es igual a menos uno
        cout << "LA IDENTIFICACION "<< ID << "NO ESTA REGISTRADA" << endl;//El valor ingresado (NID) no esta registrado
	}else{                                                          // Si no el valor existe y se muestraen pantalla
	cout << "NOMBRE 		: " 	<< getVec(Posicion).getNombres() 		<< endl;
	cout << "APELLIDOS 	: " 		<< getVec(Posicion).getApellidos() 		<< endl;
	cout << "IDENTIFICACION 	: "	<< getVec(Posicion).getIdentificacion()		<< endl;
	cout << "CIUDAD 		: "	<< getVec(Posicion).getCiudad() 		<< endl;
	cout << "CELULAR 	: "		<< getVec(Posicion).getCelular() 		<< endl;
	cout << "EDAD 		: "		<< getVec(Posicion).getEdad() 			<< endl;
       // cout << Vec[Posicion].getEdad() 	didd	<< endl << endl;
    }
}

void VecEmpresa::OrdenamientoBurbuja(){
	//este metodo ordena el vector los nombres ascendentemente usando ordenamiento por burbuja
	Empleados Temp;
	for(int i = 1; i < getTam(); i++){
		for(int j = 0; j < getTam()-1; j++){
			if(Vec[j].getNombres() > Vec[j+1].getNombres()){
				Temp 	 = Vec[j];
				Vec[j]   = Vec[j+1];
				Vec[j+1] = Temp;		
			}
		}
	}
MostrarDatos();
}

void VecEmpresa::OrdenamientoSeleccion(){                     	//Ordenamiento por sellecion
	int Minimo;                                                 	//Declaramos nuestro minimo
	Empleados Temp;
	for(int i=0; i < getTam(); i++){                            	//Recorremos nuestro vector objeto
		Minimo = i;                                             // a minimo le asigno la posicion i
		for(int j=i+1; j < getTam(); j++){                      //recorremos nuestro vector en la posicion siguiente de la inicial
			if(Vec[Minimo].getApellidos() > Vec[j].getApellidos()){   //Si el valor en la posicion minimo es mayor que en la posicion j
				Minimo = j;                             //Entonces minimo sera igual a j
			}
		}
		Temp		= Vec[i];                                          //le asiganmos a nuestro temporal la info del profesor en ese lugar
		Vec[i] 		= Vec[Minimo];                                   //Intercambiamos los valores
		Vec[Minimo] 	= Temp;                                     //volvemos en valor de temporal a su nueva ubicacion o intercambio
	}
MostrarDatos();
}

void VecEmpresa::OrdenamientoIntercambioEdades(){
	Empleados Temp;
	for(int i = 0; i < getTam(); i++){
		for( int j = i+1; j < getTam(); j++){
			if(Vec[i].getEdad() > Vec[j].getEdad()){
				Temp = Vec[i];
				Vec[i] = Vec[j];
				Vec[j] = Temp;
				}
		}
	}
MostrarDatos();
}

void ConvertirMayus(string& Cadena){
	//Convertimos las lineas de texto ingresadas de mayusculas a minusculas
	for(int i = 0; i < (int)Cadena.length(); i++){
		Cadena[i] = tolower(Cadena[i]);
	}
}

void PedirDatos(Empleados *Emp){
	//en este metodo se pide al usuario que ingrese los datos//
	string Names; //Name guardara el nombre del empleado
	string Surnames; //Name guardara el nombre del empleado
	string Id; //guardara la identificacion
	string Cell; //guardará el celular
	string Ciu; //guardará la ciudad
	int Age; //guardará la edad
	int Opc=0;

	cout << "INGRESE LOS DATOS DEL EMPLEADO" << endl;

	cout << "INGRESE SU NOMBRE " 			<< endl;
	cin >> Names;
	ConvertirMayus(Names);
	Emp->setNombres(Names); // al objeto Emp se le asigna Names
	cout << "INGRESE SUS APELLIDOS " 		<< endl;
	cin >> Surnames;
	ConvertirMayus(Surnames);
	Emp->setApellidos(Surnames);
	// al objeto Emp se llama el metodo modificador setApellidos y se le pasa por parametro Surnames
	cout << "INGRESE SU NUMERO DE IDENTIFICACION " 	<< endl;
	cin >> Id;
	ConvertirMayus(Id);
	Emp->setIdentificacion(Id);
	// se llama al metodo modificador setIdentificacion y se pasa por parametro Id
	do{
	//Se crea un do while para que escoga en que ciudad radica el empleado segun las opciones
	cout << "INGRESE EL NUMERO DE LA CIUDAD A QUE PERTENECE" << endl;
	cout << "1. Bogota" << endl;
	cout << "2. Barranquilla" << endl;
	cout << "3. Cali" << endl;
	cout << "4. Medellin" << endl;
	cin >> Opc;
		if(Opc==1){
			Ciu = "bogota";
			Emp->setCiudad(Ciu);
		}else{
			if(Opc==2){
				Ciu = "barranquilla";
				Emp->setCiudad(Ciu);
			}else{
				if(Opc==3){
					Ciu = "cali";
					Emp->setCiudad(Ciu);
				}else{
					if(Opc==4){
						Ciu = "medellin";
						Emp->setCiudad(Ciu);
					}else{
						cout << "Digite bien!" << endl;
					}
				}
			}
		}
	}while(Opc != 1 && Opc != 2 && Opc != 3 && Opc != 4);
	cout << "INGRESE SU NUMERO DE CELULAR "		<< endl;
	cin >> Cell;
	ConvertirMayus(Cell);
	Emp->setCelular(Cell);
	 //al objeto Emp se le asigna Cell para esto se llama al metodo modificador setCelular y se pasa por parametro Cell
	cout << "INGRESE SU EDAD " 			<< endl;
	cin >> Age;
	Emp->setEdad(Age);
	//al objeto Emp se le asigna Age para esto se llama al modificador setEdad y se pasa por parametro Age
}
