#include<string>
using namespace std;

#pragma once
class Fecha
{
protected:
    int dia;
    string mes;
    int anio;
public:
    Fecha();
    Fecha(int elDia, string elMes, int elAnio);

    void setDia(int elDia);
    void setMes(string elMes);
    void setAnio(int elAnio);

    int getDia();
    string getMes();
    int getAnio();
};