#include"MotorNormal.hpp"

MotorNormal::MotorNormal()
{
    numCilindros = 4;
}
MotorNormal::MotorNormal(int elnumCilindros)
{
    numCilindros = elnumCilindros;
}

void MotorNormal::setnumCilindros(int elnumCilindros)
{
    numCilindros = elnumCilindros;
}
int MotorNormal::getnumCilindros()
{
    return numCilindros;
}