using namespace std;
#include "Car.h"
#include <iostream>

Car::Car(string color1, string type1, int maxSpeed1) {
    set_Color(color1);
    set_Type(type1);
    set_MaxSpeed(maxSpeed1);
}
string Car::get_Color()//свойства для цвета
{
    return color;
}
void Car::set_Color(string value)
{
    if (value.size() > 0 && value.size() < 20)
        color = value;
    else
        throw "Цвет должен быть больше 0 и меньше 25 символов!";
}
string Car::get_Type()//свойства для стороны b
{
    return type;
}
void Car::set_Type(string value)
{
    if (value.size() > 0 && value.size() < 30)
        type = value;
    else
        throw "Тип должен быть больше 0 и меньше 30 символов!";
}
int Car::get_MaxSpeed()//свойства для стороны c
{
    return maxSpeed;
}
void Car::set_MaxSpeed(int value)
{
    if (value > 0 && value < 100)
        maxSpeed = value;
    else
        throw "Скорость должена быть больше 0 и меньше 100!";
}
void Car::IncereaseMaxSpeed(int x) {
	if (maxSpeed + x <100)
        set_MaxSpeed(maxSpeed + x);
	else throw "Скорость не может быть больше 100";
}
void Car::ReduceMaxSpeed(int x) {
    set_MaxSpeed(maxSpeed-x);
}
void Car::ChangeTheColor(string newColor) {
    set_Color(newColor);
}