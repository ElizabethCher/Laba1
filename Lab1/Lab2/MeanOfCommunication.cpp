#include "MeanOfCommunication.h"
using namespace std;
#include <iostream>
MeanOfCommunication::MeanOfCommunication(string typr1, bool avto1, int maxSpeed1) {
    set_MaxSpeed(maxSpeed1);
    set_Type(typr1);
    set_Avto(avto1);
}
int MeanOfCommunication::get_MaxSpeed()//�������� ��� ������� c
{
    return maxSpeed;
}
void MeanOfCommunication::set_MaxSpeed(int value)
{
    if (value > 0 && value < 100)
        maxSpeed = value;
    else
        throw "�������� ������� ���� ������ 0 � ������ 100!";
}
string MeanOfCommunication::get_Type()//�������� ��� ������� b
{
    return type;
}
void MeanOfCommunication::set_Type(string value)
{
    if (value.size() > 0 && value.size() < 30)
        type = value;
    else
        throw "��� ������ ���� ������ 0 � ������ 30 ��������!";
}
bool MeanOfCommunication::get_Avto()//�������� ��� ������� c
{
    return avto;
}
void MeanOfCommunication::set_Avto(bool value)
{
    avto = value;
}
void MeanOfCommunication::IncereaseMaxSpeed(int x) {
	if (maxSpeed + x < 0 > 100)
		maxSpeed += x;
	else throw "�������� �� ����� ���� ������ 100";
}
void MeanOfCommunication::ReduceMaxSpeed(int x) {
	if (maxSpeed - x > 0)
		maxSpeed -= x;
	else throw "������ ��������� �������� �� 0 � ������.";
}
void MeanOfCommunication::ChangeType(string newType) {
	set_Type(newType);
}
