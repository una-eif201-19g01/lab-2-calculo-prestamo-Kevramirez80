#include <iostream>
#include "CalculoPrestamo.h"
#include <ostream>
//#include "CalculoPrestamo.cpp"

int main()
{
	CalculoPrestamo m;
	//cout << m.calculaTiempoMeses("10A") << endl;
	//cout << m.obtenerPorcentaje("8.04%") << endl;
	//cout << m.CalculaInteresMensual(30000.000000,0.084) << endl;
	//cout << m.reporteCalculoPrestamo("1A", "8.04") << endl;
	m.reporteCalculoPrestamo("1A", "8.40%");
	system("pause");
	return 0;
	cin.get();

}
