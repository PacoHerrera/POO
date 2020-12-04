#include"Caballos.hpp"
#pragma once
class MotorElectrico : public Caballos
{
protected:

    int numBaterias;

public:
    MotorElectrico();
    MotorElectrico(int elnumBaterias);

    void setnumBaterias(int elnumBaterias);
    int getnumBaterias();
};