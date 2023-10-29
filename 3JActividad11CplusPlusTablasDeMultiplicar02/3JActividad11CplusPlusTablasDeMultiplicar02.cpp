// 3JActividad11CplusPlusTablasDeMultiplicar02.cpp

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int NUM, RESUL, t, i;
	string linea;
	cout << "Cuantas tablas: "; cin >> linea;
	NUM = stoi(linea);
	t = 1;
	while (t <= NUM) {
		i = 10;
		while (!(i < 1)) {
			RESUL = t * i;
			cout << t << " * " << i << " = " << RESUL << endl;
			i--;
		}
		system("PAUSE");
		t++;
	}

	return 0;
}

