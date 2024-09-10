#pragma once
using namespace std;
#include <iostream>
class MeanOfCommunication
{
public: MeanOfCommunication(string typr1, bool avto1, int maxSpeed1);
protected:
    string type;
    bool avto;
    int maxSpeed;
public:
    int get_MaxSpeed();//свойства для стороны c
    void set_MaxSpeed(int value);
    string get_Type();//свойства для стороны b
    void set_Type(string value);
        bool get_Avto();//свойства для стороны c
        void set_Avto(bool value);
public:   void IncereaseMaxSpeed(int x);//уыеличить max скорость
      void ReduceMaxSpeed(int x);//уменьшить max скорость
      void ChangeType(string newType);//изменитть цвет
};

