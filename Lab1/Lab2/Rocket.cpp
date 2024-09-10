#include "Rocket.h"
using namespace std;
#include <iostream>
Rocket::Rocket(string type1, string purpose1, int quantity1) {
    set_Quantity(quantity1);
    set_Type(type1);
    set_Purpose(purpose1);
}
int Rocket::get_Quantity()//свойства дл€ цвета
{
    return quantity;
}
void Rocket::set_Quantity(int value)
{
    if (value >= 0)
        quantity = value;
    else
        throw " оличество должен быть больше 0!";
}
string Rocket::get_Type()//свойства дл€ стороны b
{
    return type;
}
void Rocket::set_Type(string value)
{
    if (value.size() > 0 && value.size() < 30)
        type = value;
    else
        throw "“ип должен быть больше 0 и меньше 30 символов!";
}
string Rocket::get_Purpose()//свойства дл€ стороны c
{
    return purpose;
}
void Rocket::set_Purpose(string value)
{
    if (value == "тактическое" || value == "крылатое")
        purpose = value;
    else
        throw "Ќазначение ракеты должно быть либо тактическое либо крылатое!";
}
void Rocket::TopQuantity(int x) {
	quantity += x;
}
void Rocket::ReduceQuantity(int x) {
	if (quantity - x >= 0)
		quantity -= x;
	else throw " оличество ракет не может быть отрицательное";
}
void Rocket::ChangePurpose(string newPurpose) {
	set_Purpose(newPurpose);
}
