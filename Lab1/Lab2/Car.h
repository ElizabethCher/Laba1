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
    string get_Color();//�������� ��� �����
    void set_Color(string value);
    string get_Type();//�������� ��� ������� b
    void set_Type(string value);
    int get_MaxSpeed();//�������� ��� ������� c
    void set_MaxSpeed(int value);
public:
    void IncereaseMaxSpeed(int x);//��������� max ��������
    void ReduceMaxSpeed(int x);//��������� max ��������
    void ChangeTheColor(string newColor);//��������� ����
};

