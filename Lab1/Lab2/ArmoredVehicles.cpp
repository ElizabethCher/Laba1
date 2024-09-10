#include "ArmoredVehicles.h"
using namespace std;
#include <iostream>

ArmoredVehicles::ArmoredVehicles(string type1, int quantity1, int maxSpeed1) {
    set_Quantity(quantity1);
    set_Type(type1);
    set_MaxSpeed(maxSpeed1);
}
int ArmoredVehicles::get_Quantity()//свойства для цвета
{
    return quantity;
}
void ArmoredVehicles::set_Quantity(int value)
{
    if (value >= 0)
        quantity = value;
    else
        throw "Количество должен быть больше 0!";
}
string ArmoredVehicles::get_Type()//свойства для стороны b
{
    return type;
}
void ArmoredVehicles::set_Type(string value)
{
    if (value.size() > 0 && value.size() < 30)
        type = value;
    else
        throw "Тип должен быть больше 0 и меньше 30 символов!";
}
int ArmoredVehicles::get_MaxSpeed()//свойства для стороны c
{
    return maxSpeed;
}
void ArmoredVehicles::set_MaxSpeed(int value)
{
    if (value > 0 && value < 100)
        maxSpeed = value;
    else
        throw "Скорость должена быть больше 0 и меньше 100!";
}
void ArmoredVehicles::TopQuantity(int x) {
	quantity += x;
}
void ArmoredVehicles::IncereaseMaxSpeed(int x) {
	
	if (maxSpeed + x < 0 > 100)
		maxSpeed += x;
	else throw "Скорость не может быть больше 100";
}
void ArmoredVehicles::ReduceMaxSpeed(int x) {
	if (maxSpeed - x > 0)
		maxSpeed -= x;
	else throw "Нельзя уменьшить скорость до 0 и меньше.";
}