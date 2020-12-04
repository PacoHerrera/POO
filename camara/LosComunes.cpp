#include"LosComunes.hpp"

LosComunes::LosComunes()
{
    marca = "Canon";
    modelo = "Rebel";
}
LosComunes::LosComunes(string laMarca, string elModelo)
{
    marca = laMarca;
    modelo = elModelo;
}

void LosComunes::setMarca(string laMarca)
{
    marca = laMarca;
}
void LosComunes::setModelo(string elModelo)
{
    modelo = elModelo;
}

string LosComunes::getMarca()
{
    return marca;
}
string LosComunes::getModelo()
{
    return modelo;
}