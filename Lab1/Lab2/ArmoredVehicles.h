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
    int get_Quantity();//�������� ��� �����
    void set_Quantity(int value);
    string get_Type();//�������� ��� ������� b
    void set_Type(string value);
    int get_MaxSpeed();//�������� ��� ������� c
    void set_MaxSpeed(int value);
public: void TopQuantity(int x);
      void IncereaseMaxSpeed(int x);//��������� max ��������
      void ReduceMaxSpeed(int x);//��������� max ��������

};

