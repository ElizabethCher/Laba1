using namespace std;
#include <iostream>
#include <vector>
#include "Trangle.h"

int main()
{
    setlocale(LC_ALL, "RUS");
    bool finish = true;
    try {
        int a, b, c;
        vector<Trangle> mas;
        cout << "Создайте треугольники. Введите три стороны:\n";
        int i = 0;
        while (finish == true)
        {
            try {
            i += 1;
            cout << "Треугольник:" << i << "\n";
            cin >> a;
                cin >> b;
                cin >> c;
                mas.push_back(Trangle(a,b,c));
                cout << "\nСоздать еще треугольник (1 - да, 2 - нет)?\n";
                int q = 0;
                cin >> q;
               if (q==2)
                   finish = false;
            }
            catch (const char* error)
            {
                cout << error << "\n";
                i = 0;
                system("pause");
            }
        }
        finish = true;
        while (finish == true)
        {
            try
            {
                cout << "Ваши треугольники:";
                for (int y = 0; y < i; y++)
                {
                    cout << "\nТреугольник:" << y + 1 << "\n";
                    cout << mas[y].get_A();
                    cout << mas[y].get_B();
                    cout << mas[y].get_C();
                }
                int i = 0, j = 0;
                cout << "\nВыберите операцию (введите номер нужной операции):\n";
                cout << "1 - Увеличить стороны треугольника в заданное количество.\n";
                cout << "2 - Уменьшить стороны треугольника в заданное количество.\n";
                cout << "3 - Вычислить периметр.\n";
                cout << "4 - Вычислить площадь.\n";
                cout << "5 - Определить значение углов.\n";
                cout << "6 - Закончить.\n";
                cin >> i;
                cout << "Выберите треугольник для операции:\n";
                cin >> j;
                if (j > 0 && j <= i) 
                {
                    int d = 0;
                    switch (i) {
                    case 1: cout << "Введите число на которое увеличатся стороны треугольника:\n"; 
                        cin >> d;
                        mas[j - 1].IncreaseByX(d); 
                        break;
                    case 2: 
                        cout << "Введите число на которое уменьшатся стороны треугольника:\n";
                        cin >> d;
                        mas[j - 1].DecreaseByX(d);
                        break;
                    case 3: 
                        cout<<"Периметр треугольника:"<<mas[j - 1].Perimetr()<<"\n";
                        system("pause");
                        break;
                    case 4: 
                        cout << "Площадь треугольника:" << mas[j - 1].Square() << "\n";
                        system("pause");
                        break;
                    case 5: double mas1[3];
                        mas[j - 1].FindingCorners(mas1);
                        cout << "Углы в треугольнике:" << mas1[0]<<" "<< mas1[1]<<" "<< mas1[2] << "\n";
                        system("pause");
                        break;
                    case 6: finish = false;
                        break;
                    default: cout << "Такой операции не существует\n"; 
                        system("pause");
                        break;
                    }
                }
                else {
                    cout << "Такого треугольника нет.n";
                    system("pause");
                }
            }
            catch (const char* error)
            {
                cout << error << "\n";
                system("pause");
            }
            system("cls");
        }
    }
    catch (const char* error)
    {
        cout << error << "\n";
        system("pause");
    }
        //system("pause");
    return 0;
}