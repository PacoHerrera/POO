#include"Velocidad.hpp"

Velocidad::Velocidad()
{
    velocidad = .100;
}
Velocidad::Velocidad(int laVelocidad)
{
    velocidad = laVelocidad;
}

void Velocidad::setVelocidad(int laVelocidad)
{
    velocidad = laVelocidad;
}
int Velocidad::getVelocidad()
{
    return velocidad;
}