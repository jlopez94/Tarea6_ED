#ifndef NODO_H
#define NODO_H

#include <iostream>
#include <vector>

using namespace std;

class Nodo
{
    public:
        string name;
        int grupo;
        vector<Nodo*>* connections;
        Nodo(string name);
        void setConnections(Nodo* nodos[], int size);
        virtual ~Nodo();
    protected:
    private:
};

#endif // NODO_H
