#include <cstdint>
#include <string>
#include <stdlib.h>
#include <ostream>

using namespace std;

class CalculoPrestamo
{
private:
	float monto;

public:
	CalculoPrestamo(float monto);
	CalculoPrestamo();
	int getMonto();
	void setMonto(float);
	float obtenerPorcentaje(std::string porcentajeTXT);
	int calculaTiempoMeses(std::string tiempoTXT);
	float CalculaInteresMensual(float balance, float tasaAnual);
	void reporteCalculoPrestamo(std::string tiempoTXT, std::string porcentajeTXT);
	~CalculoPrestamo();
};

#endif 