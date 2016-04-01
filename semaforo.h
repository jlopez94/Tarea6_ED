#ifndef SEMAFORO_H
#define SEMAFORO_H
#include <iostream>
#include <vector>
#include <algorithm>
#include "Nodo.h"

using namespace std;

class Semaforo
{
public:
	vector<Nodo*>* grafo;
	int grupoActual;
	Semaforo();
	~Semaforo();
	Nodo* buscar();
	void asignar(Nodo* nodo);
	void buscarPermitidos();
	void sortGraph();
	void print();
};

#endif // SEMAFORO_H
