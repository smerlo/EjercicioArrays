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
	int maximo = -1;

	for(int i = 0; i<CANTIDAD_EDADES;i++)
	{
		if(utn_getNumero(&arrayEdades[i],"Ingrese una edad: ","\nNumero fuera de rango\n",MIN,MAX, 3)!=0)
		{
			printf("Error Fatal");
		}
	}
	if(arr_calcularMaximoInt(&arrayEdades,CANTIDAD_EDADES,maximo)==0)
	{
		printf("%d", maximo);
	}

}
