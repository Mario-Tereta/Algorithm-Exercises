#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

// Definici�n de una estructura para un Empleado
struct Empleado {
	int id;
	string nombre;
	float salario;
};

// Definir el tama�o m�ximo para la lista de empleados
const int MAX_EMPLEADOS = 50;
Empleado empleados[MAX_EMPLEADOS];
int totalEmpleados = 0;

// Funci�n para agregar un empleado
void agregarEmpleado() {
	if (totalEmpleados < MAX_EMPLEADOS) {
	Empleado nuevoEmpleado;
	cout << "Ingrese el ID del empleado: ";
	cin >> nuevoEmpleado.id;
	for (int i = 0; nuevoEmpleado.id == empleados[i].id; i++) { //esta for es para evaluar los ID ya existentes. y no agregar el ID a dos o m�s empleados.
		if (nuevoEmpleado.id == empleados[i].id){
		cout << "Este ID ya esta en uso." <<endl;
		cout <<"Ingrese el ID del empleado: ";
		cin >> nuevoEmpleado.id;
	}
	}
	cout << "Ingrese el nombre del empleado: ";
	cin >> nuevoEmpleado.nombre;
	cout << "Ingrese el salario del empleado: ";
	cin >> nuevoEmpleado.salario;
	empleados[totalEmpleados] = nuevoEmpleado;
	totalEmpleados++;
	cout << "Empleado agregado exitosamente.\n";
	} else {
	cout << "No se puede agregar m�s empleados.\n";
	}
}

// Funci�n para mostrar todos los empleados
void mostrarEmpleados() {
	if (totalEmpleados == 0) {
	cout << "No hay empleados registrados.\n";
	} else {
	cout << "Lista de empleados:\n";
	for (int i = 0; i < totalEmpleados; i++) { //tiene que ser i<totalEmpleados, si es <= se mostrara empleado extra con los valores de 0
		cout << "ID: " << empleados[i].id
		<< " | Nombre: " << empleados[i].nombre
		<< " | Salario: " << empleados[i].salario << endl;
		}
	}
}

// Funci�n para actualizar el salario de un empleado
void actualizarSalario() {
	int id;
	cout << "Ingrese el ID del empleado: ";
	cin >> id;
	for (int i = 0; i < totalEmpleados; i++) {
		if (empleados[i].id == id) {
		cout << "Ingrese el nuevo salario: ";
		cin >> empleados[i].salario;
		// Error: falta mensaje de confirmaci�n
		cout<<"Salario Actalizido exitosamente." <<endl; // Mensaje de confirmacion agregado
		cout<<"El nuevo salario es: " <<empleados[i].salario <<endl;
		return;
		}
	}
	cout << "Empleado no encontrado.\n";
}

// Funci�n para eliminar un empleado
void eliminarEmpleado() {
	int id;
	cout << "Ingrese el ID del empleado a eliminar: ";
	cin >> id;
	for (int i = 0; i < totalEmpleados; i++) {
		if (empleados[i].id == id) {
			for (int j = i; j < totalEmpleados - 1; j++) { //Correci�n Realizada j < totalEmpleados - 1;
			empleados[j] = empleados[j + 1];
			}
			totalEmpleados--;
			cout << "Empleado eliminado exitosamente.\n";
			return;
		}
	}
	cout << "Empleado no encontrado.\n";
}

// Funci�n principal con men�
int main() {
	setlocale(LC_CTYPE, "Spanish"); // funcion de la libreria para poder usar tildes y letras como la � que no esntan en el idioma ingles
	int opcion;
	do {
		cout << "\n--- Sistema de Gesti�n de Empleados ---\n";
		cout << "1. Agregar empleado\n";
		cout << "2. Mostrar empleados\n";
		cout << "3. Actualizar salario de empleado\n";
		cout << "4. Eliminar empleado\n";
		cout << "5. Salir\n";
		cout << "Seleccione una opci�n: ";
		cin >> opcion;
		cin.clear();  // Agregue esta funci�n para evitar un bucle a la hora de agregar un caracter o numero que no corresponde al solicitado.
					//en este caso me sucedio al presionar por error el punto ( . ), esto me genero un bucle.
		cin.ignore();
	switch (opcion) {
	case 1:
	agregarEmpleado();
	break;
	case 2:
	mostrarEmpleados();
	break;
	case 3:
	actualizarSalario();
	break;
	case 4:
	eliminarEmpleado();
	break;
	case 5:
	cout << "Saliendo del sistema...\n";
	break;
	default:
	cout << "Opci�n no v�lida.\n";
	}
	} while (opcion != 5);
	return 0;
}

//Mario David Tereta Sapalun 0905-15-14297
