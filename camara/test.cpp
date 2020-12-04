#include"CamaraVideo.hpp"
#include<iostream>
using namespace std;

int main()
{
    CamaraVideo cv;
    cv.setCapacidad(16);
    cout << "La capacidad es de " << cv.getCapacidad() << "GB" << endl;

    cv.imprimirDetallesCamara();
}