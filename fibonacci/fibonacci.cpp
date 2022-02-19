//ricardo duarte hurtado
#include <iostream>//main
#include <math.h>//matematicas 
#include <stdio.h>//colores
using namespace std;
int main()
{//inicio de codigo
	int a, b, c, r;
	cout << "hasta que numero quieres ver ?" << endl;
	cin >> a;//variable limitante 
	b = 0;
	r = 1;
	c = 0;//variables a usar
	for (int i = 1; c <= a; i++) {//ciclo de repeticion
		b = r;
		r = c;
		cout << "numero" << i << ":" << c << endl;//donde se imprime
		c = b + r;
	}
	if (a == r) {//detector si tu numero es parte de la susecion
		cout << "si es parte de la susecion" << endl;
		system("color 20");//verde de acertaste
	}
	else {
		cout << "no es parte de la susecion" << endl;
		system("color 40");//rojo de fallaste
	}
}
