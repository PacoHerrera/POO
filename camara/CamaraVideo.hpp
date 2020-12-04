#include"TarjetaMemoria.hpp"
#include"Procesador.hpp"

#pragma once
class CamaraVideo:public Procesador, public TarjetaMemoria
{
protected:
    int resolucion;
public:
    CamaraVideo();
    CamaraVideo(int laResolucion);

    void setResolucion(int laResolucion);
    int getresolucion();

    void imprimirDetallesCamara();
    
};