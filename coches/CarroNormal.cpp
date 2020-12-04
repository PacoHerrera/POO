#include"CarroNormal.hpp"

CarroNormal::CarroNormal()
{
    Motornormal = MotorNormal(6);
}
void CarroNormal::setMotornormal(MotorNormal elMotornormal)
{
    Motornormal = elMotornormal;
}
MotorNormal CarroNormal::getMotornormal()
{
    return Motornormal;
}