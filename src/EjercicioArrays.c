/*
 ============================================================================
 Name        : EjercicioArrays.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio_ext.h>
#include <stdlib.h>
#include "utn.h"
#include "array.h"

#define MIN 0
#define MAX 99
#define CANTIDAD_EDADES 5

int main(void) {
	setbuf(stdout, NULL);
	int arrayEdades[CANTIDAD_EDADES];
	int maximo;
	int minimo;
	float promedio;
	int suma;

	for(int i = 0; i<CANTIDAD_EDADES;i++)
	{
		if(utn_getNumero(&arrayEdades[i],"Ingrese una edad: ","\nNumero fuera de rango\n",MIN,MAX, 3)!=0)
		{
			printf("Error Fatal");
		}
	}
	if(arr_calcularMaximoInt(&arrayEdades,CANTIDAD_EDADES,&maximo)==0)
	{
		printf("El maximo es %d \n", maximo);
	}
	if(arr_calcularMinimoInt(&arrayEdades,CANTIDAD_EDADES,&minimo)==0)
	{
		printf("El minimo es %d \n", minimo);
	}
	if(arr_calcularPromedioInt(&arrayEdades,CANTIDAD_EDADES,&promedio)==0)
	{
		printf("El promedio es %f \n", promedio);
	}
	if(arr_calcularSumaInt(&arrayEdades,CANTIDAD_EDADES,&suma)==0)
		{
			printf("La suma es %d \n", suma);
		}


}
