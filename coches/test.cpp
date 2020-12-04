#include"CarroElectrico.hpp"
#include"CarroNormal.hpp"
#include<iostream>

using namespace std;

int main()
{
    CarroElectrico ce;
    ce.setMarca("BMW");
    cout << "La marca del carro electrico es " << ce.getMarca();
    ce.setModelo(2021);
    cout << " y el modelo es " << ce.getModelo() << endl;

    CarroNormal cn;
    cn.setMarca("Porsche");
    cout << "La marca del carro es " << cn.getMarca();
    cn.setModelo(2020);
    cout << " y el modelo es " << cn.getModelo() << endl;
}