#include"Fecha.hpp"
#include"LosComunes.hpp"
#include"Velocidad.hpp"
#include<string>
using namespace std;

#pragma once
class TarjetaMemoria:public Fecha,public LosComunes,public Velocidad
{
protected:
    int capacidad;
    string tarjeta;
public:
    TarjetaMemoria();
    TarjetaMemoria(int laCapacidad, string laTarjeta);

    void setCapacidad(int laCapacidad);
    int getCapacidad();

    void setTarjeta(string laTarjeta);
    string getTarjeta();
};