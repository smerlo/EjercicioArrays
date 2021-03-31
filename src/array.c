#include <stdio.h>
#include <stdlib.h>

int arr_calcularMaximoInt(int* array[],int limite, int* resultado)
{
	int retorno = -1;
	if(array !=NULL && limite != NULL && resultado != NULL)
	{

		for(int i = 0; i<limite;i++)
		{
			if(*array[i]<*resultado)
			{
				printf("%d", array[i]);
				*resultado = *array[i];
			}
		}
		retorno = 0;
	}
	return retorno;
}
int arr_calcularMinimoInt(int* array,int limite, int* resultado)
{
}
int arr_calcularPromedioInt(int* array,int limite, float* resultado)
{
}
int arr_calcularSumaInt(int* array,int limite, float* resultado)
{
}
