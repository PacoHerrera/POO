#include"Caballos.hpp"
#pragma once
class MotorNormal : public Caballos
{
protected:
    int numCilindros;

public:
    MotorNormal();
    MotorNormal(int elnumCilindros);

    void setnumCilindros(int elnumCilindros);
    int getnumCilindros();
}; 
