#include"PadreDeCarros.hpp"
#include"MotorElectrico.hpp"

#pragma once
class CarroElectrico : public PadreDeCarros
{
protected:
    MotorElectrico Motorelectrico;

public:
    CarroElectrico();
    void setMotorelectrico(MotorElectrico elMotorelectrico);
    MotorElectrico getMotorelectrico();
};