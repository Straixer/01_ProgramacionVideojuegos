#include <stdio.h>
#include <iostream>
int sumaEnteros(int num1, int num2) {
	return num1 + num2;
}
double mrua(double x0, double v0, double t, double a) {
	return(x0 + v0 * t + 0.5 * a * t * t);
}

void ejercicio2() {
	printf("-------------EJERCICIO 2------------\n");
	int suma = sumaEnteros(5, 20);
	printf("Resultado de la suma: %d\n", suma);

	double resultadomrua = mrua(5, 2, 20, 1.5);
	printf("Resultado de MRUA: %f\n", resultadomrua);

}