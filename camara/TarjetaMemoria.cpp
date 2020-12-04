#include"TarjetaMemoria.hpp"

TarjetaMemoria::TarjetaMemoria()
{
    capacidad = 50;
    tarjeta = "SD";
}
TarjetaMemoria::TarjetaMemoria(int laCapacidad, string laTarjeta)
{
    capacidad = laCapacidad;
    tarjeta = laTarjeta;
}

void TarjetaMemoria::setCapacidad(int laCapacidad)
{
    capacidad = laCapacidad;
}
int TarjetaMemoria::getCapacidad()
{
    return capacidad;
}

void TarjetaMemoria::setTarjeta(string laTarjeta)
{
    tarjeta = laTarjeta;
}
string TarjetaMemoria::getTarjeta()
{
    return tarjeta;
}