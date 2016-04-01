#include <iostream>
#include "semaforo.h"
#include "Nodo.h"

using namespace std;

int main()
{
	Semaforo semaforo;
	while (semaforo.buscar() != NULL)
	{
		Nodo* actual = semaforo.buscar();
		semaforo.asignar(actual);
		semaforo.buscarPermitidos();
	}

	semaforo.sortGraph();
	semaforo.print();

	while(true)
	{

	}
}
