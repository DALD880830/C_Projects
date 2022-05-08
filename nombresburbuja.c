#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	
	
	int i, j, k, aux, x;
	typedef char arreglo[30];
	arreglo nombres[5];
	
	printf("Debes introducir 5 nombres\n\n");
	
	for(i=0; i<5; i++)
	{
	printf("Nombre %i : ", i+1);
	scanf("%s",nombres[i]);
	}
	
	aux=0;
	
	for(i = 0; i < 5; i++)
	{
		for(j = 4; j > 0; j--)
		{
			if(strcmp(nombres[j], nombres[j-1])<0)
			{
				aux=nombres[j];
				nombres[j]=nombres[j-1];
				nombres[j-1]=aux;
			}
		}
	}
	for(k=0; k<5; k++)
	{
		printf("%s\n", nombres[k]);
	}
	return 0;
}
