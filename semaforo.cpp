#include "semaforo.h"

Semaforo::Semaforo()
{
	this->grupoActual = 1;
	this->grafo = new vector<Nodo*>();

	//Creación de nodos
	Nodo* AB = new Nodo("AB"); //1
	Nodo* AC = new Nodo("AC"); //2
	Nodo* AD = new Nodo("AD"); //3

	Nodo* BA = new Nodo("BA"); //4
	Nodo* BC = new Nodo("BC"); //5
	Nodo* BD = new Nodo("BD"); //6

	Nodo* DA = new Nodo("DA"); //7
	Nodo* DB = new Nodo("DB"); //8
	Nodo* DC = new Nodo("DC"); //9

	Nodo* EA = new Nodo("EA"); //10
	Nodo* EB = new Nodo("EB"); //11
	Nodo* EC = new Nodo("EC"); //12
	Nodo* ED = new Nodo("ED"); //13

	//Creación de conexiones entre nodos
	Nodo* nodosAB[] = { BC, BD, DA, EA };
	AB->setConnections(nodosAB, 4);

	Nodo* nodosAC[] = { BD, DA, DB, EB };
	AC->setConnections(nodosAC, 4);

	Nodo* nodosAD[] = { EA, EB, EC };
	AD->setConnections(nodosAD, 3);

	BA->setConnections(NULL, 0);

	Nodo* nodosBC[] = { AB, DB, EB };
	BC->setConnections(nodosBC, 3);

	Nodo* nodosBD[] = { AB, AC, DA, EB, EC };
	BD->setConnections(nodosBD, 5);

	Nodo* nodosDA[] = { AB, AC, BD, EB, EC };
	DA->setConnections(nodosDA, 5);

	Nodo* nodosDB[] = { AC, BC, EC};
	DB->setConnections(nodosDB, 3);

	DC->setConnections(NULL, 0);

	Nodo* nodosEA[] = { AB, AC, AD};
	EA->setConnections(nodosEA, 3);

	Nodo* nodosEB[] = { AC, AD, BC, BD, DA};
	EB->setConnections(nodosEB, 5);

	Nodo* nodosEC[] = { AD, BD, DA, DB };
	EC->setConnections(nodosEC, 4);

	ED->setConnections(NULL, 0);

	//Creación del grafo
	Nodo* nodos[] = { AB, AC, AD, BA, BC, BD, DA, DB, DC, EA, EB, EC, ED };
	for (int i = 0; i < 13; i++)
		grafo->push_back(nodos[i]);
}


Semaforo::~Semaforo()
{
}

void Semaforo::asignar(Nodo* nodo)
{
	nodo->grupo = grupoActual;
}


Nodo* Semaforo::buscar()
{
	for (int i = 0; i < grafo->size(); i++)
	{
		if (grafo->at(i)->grupo == 0)
			return grafo->at(i);
	}
	return NULL;
}
