#pragma once
using namespace std;
#include <iostream>
class Anti_quixoticAgent
{
protected:
	string name, country;
	int count;
public:
    int get_Count()//�������� ��� �����
    {
        return count;
    }
    void set_Count(int value)
    {
        if (value >= 0)
            count = value;
        else
            throw "���������� ������ ���� ������ 0!";
    }
    string get_Name()//�������� ��� ������� b
    {
        return name;
    }
    void set_Name(string value)
    {
        if (value.size() > 0 && value.size() < 40)
            name = value;
        else
            throw "��� ������ ���� ������ 0 � ������ 30 ��������!";
    }
    string get_Country()//�������� ��� ������� c
    {
        return country;
    }
    void set_C(string value)
    {
        if (value.size() > 0 && value.size() < 40)
            country = value;
        else
            throw "��� ������ ���� ������ 0 � ������ 30 ��������!";
    }
public: void TopCount(int x);
      void ReduceCount(int x);//��������� max ��������
      void ChangeCountry(string newPurpose);//��������� ����
};

