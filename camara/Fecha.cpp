#include"Fecha.hpp"


Fecha::Fecha()
{
    dia = 01;
    mes = "Enero";
    anio = 2000;
}
Fecha::Fecha(int elDia, string elMes, int elAnio)
{
    dia = elDia;
    mes = elMes;
    anio = elAnio;
}

void Fecha::setDia(int elDia)
{
    dia = elDia;
}
void Fecha::setMes(string elMes)
{   
    mes = elMes;
}
void Fecha::setAnio(int elAnio)
{
    anio = elAnio;
}

int Fecha::getDia()
{
    return dia;
}
string Fecha::getMes()
{
    return mes;
}
int Fecha::getAnio()
{
    return anio;
}