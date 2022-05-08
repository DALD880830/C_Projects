#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int i, j, k, aux, x;
	char arreglo[10];
	
	printf("Debes introducir 30 nombres\n\n");
	
	for(x=0; x<=29; x++)
	{
	printf("Nombre %i : ", x+1);
	scanf("%s", arreglo);
	}
	
	for(i = 0; i < 29; i++)
	{
		for(j = 0; j < 29; j++)
		{
			if(arreglo[j] > arreglo[j+1])
			{
				aux = arreglo[j];
				arreglo[j] = arreglo [j+1];
				arreglo [j+1] = aux;
			}
		}
	}
	for(k=0; k<30; k++)
	{
		printf("%i ", arreglo[k]);
	}
	return 0;
}
