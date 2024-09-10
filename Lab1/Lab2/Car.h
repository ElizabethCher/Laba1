#pragma once
using namespace std;
#include <iostream>
class Car
{
protected:
    string color, type;
    int maxSpeed;
public:
    Car(string color1, string type1, int maxSpeed1);
    string get_Color();//свойства для цвета
    void set_Color(string value);
    string get_Type();//свойства для стороны b
    void set_Type(string value);
    int get_MaxSpeed();//свойства для стороны c
    void set_MaxSpeed(int value);
public:
    void IncereaseMaxSpeed(int x);//уыеличить max скорость
    void ReduceMaxSpeed(int x);//уменьшить max скорость
    void ChangeTheColor(string newColor);//изменитть цвет
};

