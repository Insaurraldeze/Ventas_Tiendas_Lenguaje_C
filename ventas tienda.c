#include<stdio.h>
int main()
{
	const int n=5;
	int i;
	float vector[n];
	float prom;
	
	prom=0;
	for(i=0;i<n;i++)
	{
		do
		{
			printf("\nINGRESE EL VALOR VENDIDO DE LA SUCURSAL %d: $",i+1);
			scanf("%f",&vector[i]);
			fflush(stdin);
			if(vector[i]<0)
			printf("VALOR INCORRECTO");
		}
		while(vector[i]<0);
	}
	for(i=0;i<n;i++)
	    prom=prom+vector[i];
	prom=prom/n;
	printf("EL PROMEDIO DE VENTAS ES: %.2f\n ",prom);
	
	for(i=0;i<n;i++)
	
		if(vector[i]>prom)
		
	
    printf("LA O LAS SUCURSALES QUE VENDIERON MAS QUE EL PROMEDIO SON: %d\n ",i+1);    
		
	
}
