#pragma once
class Trangle 
{
public: Trangle(int a1, int b1, int c1);

    protected: 
        int a, b, c;
    public: 
        int get_A();//�������� ��� ������� �

        void set_A(int value);
        int get_B();//�������� ��� ������� b

        void set_B(int value);
        int get_C();//�������� ��� ������� c
        void set_C(int value);
public:
         void IncreaseByX(int x);
         void DecreaseByX(int x);
         int Perimetr();
         double Square();
         void FindingCorners(double* mas);
};

