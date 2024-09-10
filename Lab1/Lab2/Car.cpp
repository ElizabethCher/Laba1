using namespace std;
#include "Car.h"
#include <iostream>

Car::Car(string color1, string type1, int maxSpeed1) {
    set_Color(color1);
    set_Type(type1);
    set_MaxSpeed(maxSpeed1);
}
string Car::get_Color()//�������� ��� �����
{
    return color;
}
void Car::set_Color(string value)
{
    if (value.size() > 0 && value.size() < 20)
        color = value;
    else
        throw "���� ������ ���� ������ 0 � ������ 25 ��������!";
}
string Car::get_Type()//�������� ��� ������� b
{
    return type;
}
void Car::set_Type(string value)
{
    if (value.size() > 0 && value.size() < 30)
        type = value;
    else
        throw "��� ������ ���� ������ 0 � ������ 30 ��������!";
}
int Car::get_MaxSpeed()//�������� ��� ������� c
{
    return maxSpeed;
}
void Car::set_MaxSpeed(int value)
{
    if (value > 0 && value < 100)
        maxSpeed = value;
    else
        throw "�������� ������� ���� ������ 0 � ������ 100!";
}
void Car::IncereaseMaxSpeed(int x) {
	if (maxSpeed + x <100)
        set_MaxSpeed(maxSpeed + x);
	else throw "�������� �� ����� ���� ������ 100";
}
void Car::ReduceMaxSpeed(int x) {
    set_MaxSpeed(maxSpeed-x);
}
void Car::ChangeTheColor(string newColor) {
    set_Color(newColor);
}