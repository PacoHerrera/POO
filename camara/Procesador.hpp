#include"Fecha.hpp"
#include"LosComunes.hpp"
#include"Velocidad.hpp"
#include<string>
using namespace std;

#pragma once
class Procesador:public Fecha, public LosComunes, public Velocidad
{
protected:
    string tarjetaGrafica;
public:
    Procesador();
    Procesador(string laTarjetaGrafica);

    void setTarjetaGrafica(string laTajertaGrafica);
    string getTarjetaGrafica();
};