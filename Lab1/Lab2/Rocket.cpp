#include "Rocket.h"
using namespace std;
#include <iostream>
Rocket::Rocket(string type1, string purpose1, int quantity1) {
    set_Quantity(quantity1);
    set_Type(type1);
    set_Purpose(purpose1);
}
int Rocket::get_Quantity()//�������� ��� �����
{
    return quantity;
}
void Rocket::set_Quantity(int value)
{
    if (value >= 0)
        quantity = value;
    else
        throw "���������� ������ ���� ������ 0!";
}
string Rocket::get_Type()//�������� ��� ������� b
{
    return type;
}
void Rocket::set_Type(string value)
{
    if (value.size() > 0 && value.size() < 30)
        type = value;
    else
        throw "��� ������ ���� ������ 0 � ������ 30 ��������!";
}
string Rocket::get_Purpose()//�������� ��� ������� c
{
    return purpose;
}
void Rocket::set_Purpose(string value)
{
    if (value == "�����������" || value == "��������")
        purpose = value;
    else
        throw "���������� ������ ������ ���� ���� ����������� ���� ��������!";
}
void Rocket::TopQuantity(int x) {
	quantity += x;
}
void Rocket::ReduceQuantity(int x) {
	if (quantity - x >= 0)
		quantity -= x;
	else throw "���������� ����� �� ����� ���� �������������";
}
void Rocket::ChangePurpose(string newPurpose) {
	set_Purpose(newPurpose);
}
