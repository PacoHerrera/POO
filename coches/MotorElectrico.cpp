#include"Motorelectrico.hpp"

MotorElectrico::MotorElectrico()
{
    numBaterias = 6;
}
MotorElectrico::MotorElectrico(int elnumBaterias)
{
    numBaterias = elnumBaterias;
}
void MotorElectrico::setnumBaterias(int elnumBaterias)
{
    numBaterias = elnumBaterias;
}
int MotorElectrico::getnumBaterias()
{
    return numBaterias;
} 