#include"CamaraVideo.hpp"
#include<iostream>
using namespace std;



CamaraVideo::CamaraVideo()
{
    resolucion = (120);
}
CamaraVideo::CamaraVideo(int laResolucion)
{
    resolucion = laResolucion;
}

void CamaraVideo::setResolucion(int laResolucion)
{
    resolucion = laResolucion;
}
int CamaraVideo::getresolucion()
{
    return resolucion;
}
void CamaraVideo::imprimirDetallesCamara()
{
    cout <<"Este es el metodo que imprime los detalles.";
}