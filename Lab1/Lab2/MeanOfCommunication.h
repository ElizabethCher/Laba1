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
    int get_MaxSpeed();//�������� ��� ������� c
    void set_MaxSpeed(int value);
    string get_Type();//�������� ��� ������� b
    void set_Type(string value);
        bool get_Avto();//�������� ��� ������� c
        void set_Avto(bool value);
public:   void IncereaseMaxSpeed(int x);//��������� max ��������
      void ReduceMaxSpeed(int x);//��������� max ��������
      void ChangeType(string newType);//��������� ����
};

