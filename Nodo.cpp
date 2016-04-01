#include "Nodo.h"

Nodo::Nodo(string name)
{
	this->name = name;
	this->grupo = 0;
	this->connections = new vector<Nodo*>();
}


Nodo::~Nodo()
{
}

void Nodo::setConnections(Nodo* nodos[], int size)
{
	for (int i = 0; i < size; i++)
		connections->push_back(nodos[i]);
}
