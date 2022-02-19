//ricardo duarte hurtado
#include <iostream>
#include <math.h>
#include <stdio.h>//librerias
using namespace std;
int main()
{
   float a, b, r;//variables

    cout << "introduce la longitud de la diagonal a: " << endl;//introduccion de los datos
    cin >> a;
    system("color 26");
    cout << "introduce la longitud de la diagonal b: " << endl;
    cin >> b;
    system("color 14");
    r = (a * b) / 2; //formula del area del rombo
    cout << "el area del rombo es : " << r << endl;
    system("color a0");
        return 0;
}
