//Ricardo Duarte Hurtado
#include <iostream>
#include <math.h>
#include <stdio.h>//librerias
using namespace std;
int main()
{
    int f, r;//variables
    cout << "que numero quieres factorizar?" << endl;//pedida de datos
    system("color 20");
    cin >> f;
    r = f;//asignacion de valores
    for (int i = f-1; i > 0; i--) {

        r = r * i;//proceso
    }
    cout << r << endl;//mostrar resultado
    system("color 80");
    return 0;
}
