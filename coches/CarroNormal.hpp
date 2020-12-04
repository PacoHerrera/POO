#include"PadreDeCarros.hpp"
#include"MotorNormal.hpp"
#pragma once
class CarroNormal : public PadreDeCarros
{
protected:
    MotorNormal Motornormal;

public:
    CarroNormal();
    void setMotornormal(MotorNormal elMotornormal);
    MotorNormal getMotornormal();
};