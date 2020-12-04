#include"Procesador.hpp"

Procesador::Procesador()
{
    tarjetaGrafica = "RTX 3090";
}
Procesador::Procesador(string laTarjetaGrafica)
{
    tarjetaGrafica = laTarjetaGrafica;
}

void Procesador::setTarjetaGrafica(string laTajertaGrafica)
{
    tarjetaGrafica = laTajertaGrafica;
}
string Procesador::getTarjetaGrafica()
{
    return tarjetaGrafica;
}