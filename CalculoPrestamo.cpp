#include <iostream>
#include "CalculoPrestamo.h"




CalculoPrestamo::CalculoPrestamo(float Unmonto)//constructor con parametros, crea una instancia con datos
{
	monto = Unmonto;
}


CalculoPrestamo::CalculoPrestamo()//contructor sin parametros,crea instancia nula
{
	monto = 0;
}

int CalculoPrestamo::getMonto()
{
	return monto;
}

void CalculoPrestamo::setMonto(float unMonto)
{
	monto = unMonto;
}

float CalculoPrestamo::obtenerPorcentaje(std::string porcentajeTXT)
{

	string var = "8.40%";
	double numero = stof(var);//stof: pasa de string a float
	double resultado = numero / 100;
	return resultado;
}

int CalculoPrestamo::calculaTiempoMeses(std::string tiempoTXT)// se crea un metodo el cual analice si es meses o años y hace la convercion de ser necesario
{
	int cantidad = tiempoTXT.length();
	int resultado;
	string  s1 = tiempoTXT;
	if (cantidad == 3)
	{
		int numero = stoi(s1.substr(0, 2));//toma elnumero de dos digitos y lo devuelve como texto, stoi: trasforma el texto en int
		string letra = s1.substr(2, 1);
		if (letra == "A")
		{
			int resultado = numero * 12;
			return resultado;
		}
		else
		{
			int resultado = numero;
			return resultado;

		}

	}
	else
	{
		int  numero = stoi(s1.substr(0, 1));
		string letra = s1.substr(1, 1);
		if (letra == "A")
		{
			int resultado = numero * 12;
			return resultado;
		}
		else
		{
			int resultado = numero;
			return resultado;

		}

	}

}

float CalculoPrestamo::CalculaInteresMensual(float balance, float tasaAnual)
{




	float balanceA = 30000.000000;
	float tasaAnual1 = 0.084;

	float balanceN = balanceA * tasaAnual1;

	return balanceN;




}

void CalculoPrestamo::reporteCalculoPrestamo(string tiempoTXT, string porcentajeTXT)// metodo void para que sirvan los cout
{
	float meses = calculaTiempoMeses(tiempoTXT);
	float porcentaje = obtenerPorcentaje(porcentajeTXT);
	float total = CalculaInteresMensual(30000.0000, 0.084);//las variables iniciadas van  fuera del for para asi solo llamarla adentro
	float montoFinalMes = 30000.0000;
	float balanceNuevo = 0;
	//float meses =   calculaTiempoMeses(tiempoTXT);
	for (int i = 1; i <= meses; i++)
	{

		balanceNuevo = montoFinalMes;
		total = balanceNuevo * 0.084;
		montoFinalMes += 30000.0000 + total;
		//balanceNuevo = montoFinalMes;

		cout << "taza [8.40%]" << "mes[" << i << "]" << "balance inicial[" << balanceNuevo << "]" << "Intereses[" << total << "]" << "Balance nuevo[" << montoFinalMes << "]" << endl;
		//Tasa[8.40 %], Mes[1], balance inicial[30000.000000], interes[210.000000], balance nuevo[30210.000000]
	}
	system("PAUSE");

}



CalculoPrestamo::~CalculoPrestamo()
{
}
