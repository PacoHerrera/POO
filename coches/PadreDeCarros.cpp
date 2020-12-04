#include"PadreDeCarros.hpp"

void PadreDeCarros::setMarca(string laMarca)
{
    marca = laMarca;
}
void PadreDeCarros::setNombre(string elNombre)
{
    nombre = elNombre;
}
void PadreDeCarros::setModelo(int elModelo)
{
    modelo = elModelo;
}
void PadreDeCarros::setVelocidad(int laVelocidad)
{
    velocidad = laVelocidad;
}

string PadreDeCarros::getMarca()
{
    return marca;
}
string PadreDeCarros::getNombre()
{
    return nombre;
}
int PadreDeCarros::getModelo()
{
    return modelo;
}
int PadreDeCarros::getVelocidad()
{
    return velocidad;
}