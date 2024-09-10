#pragma once
using namespace std;
#include <iostream>
class ArmoredVehicles
{
    public: ArmoredVehicles(string type1, int quantity1, int maxSpeed1);
    protected:
    string type;
    int quantity, maxSpeed;
public:
    int get_Quantity();//свойства для цвета
    void set_Quantity(int value);
    string get_Type();//свойства для стороны b
    void set_Type(string value);
    int get_MaxSpeed();//свойства для стороны c
    void set_MaxSpeed(int value);
public: void TopQuantity(int x);
      void IncereaseMaxSpeed(int x);//уыеличить max скорость
      void ReduceMaxSpeed(int x);//уменьшить max скорость

};

