#include"CarroElectrico.hpp"

CarroElectrico::CarroElectrico()
{
    Motorelectrico = MotorElectrico(10);
}
void CarroElectrico::setMotorelectrico(MotorElectrico elMotorelectrico)
{
    Motorelectrico = elMotorelectrico;
}
MotorElectrico CarroElectrico::getMotorelectrico()
{
    return Motorelectrico;
}