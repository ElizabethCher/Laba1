#pragma once
using namespace std;
#include <iostream>
class Anti_quixoticAgent
{
protected:
	string name, country;
	int count;
public:
    int get_Count()//свойства для цвета
    {
        return count;
    }
    void set_Count(int value)
    {
        if (value >= 0)
            count = value;
        else
            throw "Количество должен быть больше 0!";
    }
    string get_Name()//свойства для стороны b
    {
        return name;
    }
    void set_Name(string value)
    {
        if (value.size() > 0 && value.size() < 40)
            name = value;
        else
            throw "Тип должен быть больше 0 и меньше 30 символов!";
    }
    string get_Country()//свойства для стороны c
    {
        return country;
    }
    void set_C(string value)
    {
        if (value.size() > 0 && value.size() < 40)
            country = value;
        else
            throw "Тип должен быть больше 0 и меньше 30 символов!";
    }
public: void TopCount(int x);
      void ReduceCount(int x);//уыеличить max скорость
      void ChangeCountry(string newPurpose);//изменитть цвет
};

