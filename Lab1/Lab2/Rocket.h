#pragma once
using namespace std;
#include <iostream>
class Rocket
{
public:Rocket(string type1, string purpose1, int quantity1);
    protected:
    string type, purpose;
    int quantity;
public:
    int get_Quantity();//свойства для цвета
    void set_Quantity(int value);
    string get_Type();//свойства для стороны b
    void set_Type(string value);
    string get_Purpose();//свойства для стороны c
    void set_Purpose(string value);
public: void TopQuantity(int x);
      void ReduceQuantity(int x);//уыеличить max скорость
      void ChangePurpose(string newPurpose);//изменитть цвет
};

