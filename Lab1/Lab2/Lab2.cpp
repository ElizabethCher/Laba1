using namespace std;
#include <iostream>
#include <vector>
#include "Car.h"
#include "Rocket.h"
#include "MeanOfCommunication.h"
#include "ArmoredVehicles.h"


int main()
{
    setlocale(LC_ALL, "RUS");
    Car car1 = Car("зеленый","КамАЗ-6350",67);
    Car car2 = Car("зеленый", "Урал-5323", 47);
    Car car3 = Car("зеленый", "КамАЗ-43114", 87);
    Car car4 = Car("зеленый", "КамАЗ-5350", 67);
    Car car5 = Car("синий", "КамАЗ-65117", 67);
    Car car6 = Car("зеленый", "УАЗ-3151", 97);
    Car car7 = Car("зеленый", "УАЗ-3153 «Гусар»", 63);
    cout << "-------------Car-------------\n";
    cout << "Увеличиваю скорость сar1 на 2 (IncereaseMaxSpeed(2)):  "<<"было: "<< car1.get_MaxSpeed()<<"\n";
    car1.IncereaseMaxSpeed(2);
    cout << "Стало: " << car1.get_MaxSpeed() <<"\n";
    cout << "Уменьшаю скорость сar2 на 2 (ReduceMaxSpeed(2)):  " << "было: " << car2.get_MaxSpeed() << "\n";
    car2.ReduceMaxSpeed(2);
    cout << "Стало: " << car2.get_MaxSpeed() << "\n";
    cout << "Изменяю цвет сar3 на розовый (ChangeTheColor(\"розовый\")):  " << "было: " << car3.get_Color() << "\n";
    car3.ChangeTheColor("розовый");
    cout << "Стало: " << car3.get_Color() << "\n";
    cout << "Вывожу тип car4 "  << car4.get_Type() << "\n";
    cout << "Вывожу тип car5 " << car5.get_Type() << "\n";
    cout << "Вывожу цвет car6 " << car6.get_Color() << "\n";

    Rocket rocket1 = Rocket("Р-500 (9М728)", "крылатое", 67);
    Rocket rocket2 = Rocket("9М729", "крылатое", 47);
    Rocket rocket3 = Rocket("9К720 «Искандер»", "тактическое", 87);
    Rocket rocket4 = Rocket("KN-23 (Хвасон-11)", "тактическое", 67);
    Rocket rocket5 = Rocket("Точка-У", "тактическое", 67);

    cout << "-------------Rocket-------------\n";
    cout << "Увеличиваю количество rocket1 на 2 (TopQuantity(2)):  " << "было: " << rocket1.get_Quantity() << "\n";
    rocket1.TopQuantity(2);
    cout << "Стало: " << rocket1.get_Quantity() << "\n";
    cout << "Уменьшаю количсетво rocket2 на 2 (ReduceQuantity(2)):  " << "было: " << rocket2.get_Quantity() << "\n";
    rocket2.ReduceQuantity(2);
    cout << "Стало: " << rocket2.get_Quantity() << "\n";
    cout << "Изменяю назначение rocket3 на крылатое (ChangePurpose(\"крылатое\")):  " << "было: " << rocket3.get_Purpose() << "\n";
    rocket3.ChangePurpose("крылатое");
    cout << "Стало: " << rocket3.get_Purpose() << "\n";
    cout << "Вывожу тип rocket4 " << rocket4.get_Type() << "\n";
    cout << "Вывожу назнаение rocket5 " << rocket5.get_Purpose() << "\n";

    MeanOfCommunication meanOfCommunication1 = MeanOfCommunication("АПЕ-5", true, 67);
    MeanOfCommunication meanOfCommunication2 = MeanOfCommunication("Акация-М", true, 47);
    MeanOfCommunication meanOfCommunication3 = MeanOfCommunication("МШ-12 «Светлица»", true, 87);
    MeanOfCommunication meanOfCommunication4 = MeanOfCommunication("ЗВКС-М", false, 67);
    MeanOfCommunication meanOfCommunication5 = MeanOfCommunication("Редут-2УС", false, 67);
    MeanOfCommunication meanOfCommunication6 = MeanOfCommunication("П-230Т", false, 67);
    MeanOfCommunication meanOfCommunication7= MeanOfCommunication("Аурига-1,2В", false, 67);

    cout << "-------------MeanOfCommunication-------------\n";
    cout << "Увеличиваю скорость meanOfCommunication1 на 2 (IncereaseMaxSpeed(2)):  " << "было: " << meanOfCommunication1.get_MaxSpeed() << "\n";
    meanOfCommunication1.IncereaseMaxSpeed(2);
    cout << "Стало: " << meanOfCommunication1.get_MaxSpeed() << "\n";
    cout << "Уменьшаю скорость meanOfCommunication2 на 2 (ReduceMaxSpeed(2)):  " << "было: " << meanOfCommunication2.get_MaxSpeed() << "\n";
    meanOfCommunication2.ReduceMaxSpeed(2);
    cout << "Стало: " << meanOfCommunication2.get_MaxSpeed() << "\n";
    cout << "Изменяю тип meanOfCommunication3 на розовый (ChangeType(\"Акация-М\")):  " << "было: " << meanOfCommunication3.get_Type() << "\n";
    meanOfCommunication3.ChangeType("Акация-М");
    cout << "Стало: " << meanOfCommunication3.get_Type() << "\n";
    cout << "Вывожу тип meanOfCommunication4 " << meanOfCommunication4.get_Type() << "\n";
    cout << "Вывожу тип meanOfCommunication5 " << meanOfCommunication5.get_Type() << "\n";
    cout << "Вывожу скорость meanOfCommunication6 " << meanOfCommunication6.get_MaxSpeed() << "\n";

    ArmoredVehicles armoredVehicles1 = ArmoredVehicles("Т-90М", 5, 67);
    ArmoredVehicles armoredVehicles2 = ArmoredVehicles("Т-90", 6, 47);
    ArmoredVehicles armoredVehicles3 = ArmoredVehicles("Т-80У»", 19, 87);
    ArmoredVehicles armoredVehicles4 = ArmoredVehicles("Т-80БВМ", 160, 67);
    ArmoredVehicles armoredVehicles4 = ArmoredVehicles("Т-72Б3", 23, 67);
    ArmoredVehicles armoredVehicles4 = ArmoredVehicles("Т-72БА", 26, 67);
    ArmoredVehicles armoredVehicles7 = ArmoredVehicles("Т-72А", 1, 67);

    cout << "-------------ArmoredVehicles-------------\n";
    cout << "Увеличиваю количество armoredVehicles1 на 2 (TopQuantity(2)):  " << "было: " << armoredVehicles1.get_Quantity() << "\n";
    armoredVehicles1.TopQuantity(2);
    cout << "Стало: " << armoredVehicles1.get_Quantity() << "\n";
    cout << "Уменьшаю скорость armoredVehicles2 на 2 (ReduceMaxSpeed(2)):  " << "было: " << armoredVehicles1.get_MaxSpeed() << "\n";
    armoredVehicles1.ReduceMaxSpeed(2);
    cout << "Стало: " << armoredVehicles1.get_MaxSpeed() << "\n";
    cout << "Увеличиваю скорость armoredVehicles3 на 2 (IncereaseMaxSpeed(2)):  " << "было: " << armoredVehicles3.get_MaxSpeed() << "\n";
    armoredVehicles1.IncereaseMaxSpeed(2);
    cout << "Стало: " << armoredVehicles3.get_MaxSpeed() << "\n";
    cout << "Вывожу тип armoredVehicles4 " << armoredVehicles4.get_Type() << "\n";
    cout << "Вывожу тип armoredVehicles4 " << armoredVehicles4.get_Type() << "\n";
    cout << "Вывожу скорость armoredVehicles4 " << armoredVehicles4.get_MaxSpeed() << "\n";
}