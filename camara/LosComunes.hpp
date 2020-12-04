#include<string>
using namespace std;

#pragma once
class LosComunes
{
protected:
    string marca;
    string modelo;
public:
    LosComunes();
    LosComunes(string laMarca, string elModelo);

    void setMarca(string laMarca);
    void setModelo(string elModelo);

    string getMarca();
    string getModelo();
};