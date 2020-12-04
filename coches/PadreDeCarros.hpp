#include<string>
using namespace std;

#pragma once
class PadreDeCarros
{
protected:
    string marca;
    string nombre;
    int modelo;
    int velocidad;

public:
    void setMarca(string laMarca);
    void setNombre(string elNombre);
    void setModelo(int elModelo);
    void setVelocidad(int laVelocidad);

    string getMarca();
    string getNombre();
    int getModelo();
    int getVelocidad();
};