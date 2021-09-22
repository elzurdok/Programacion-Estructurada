#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Ejercicio 2
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int i, alumnos=0;
	float notas=0;
	system ("cls");
	for (i=1;i<=20;i++)
		{
			printf ("Ingresar numero de alumno \n",i);
			scanf ("%i", &alumnos);
			printf ("Ingrese la nota del alumno \n");
			scanf ("%f",&notas);
		}
	
	if (notas<4)
	printf ("Alumno %i aplazados \n",alumnos);


	system ("pause");
	return 0;
}

//Ejercicio 3

int main (){
	
	int i,valor=0, positivo=0,negativo=0,zeros=0;
	system ("cls");
	for (i=1;i<=10;i++)
		{
			printf ("Ingrese un numero \n ",i);
			scanf ("%i",&valor);
			if (valor>0)
			{
				printf ("Positivo \n ");
				positivo= positivo + 1;
			}
			else if (valor<0)
				{
					printf ("Negativo \n ");
					negativo = negativo + 1;
				}
				else 
					{
						printf ("Cero \n ");
						zeros= zeros + 1;
					}
		}
	
	printf ("El total de los numeros:  \n ");
	printf ("Ceros %i ",zeros);
	printf("Positivos %i ",positivo);
	printf("Negativos %i ",negativo);
	
	


	
	
	system ("pause");

}


// Ejercicio 4

int main(){
	
	int i, general=0, valor=0, tot=0,par=0,impar=0;
	float Ppar, Pimpar;
	system ("cls");
	
	general= general+valor;
	for (i=1;i<=8;i++)
		{
			printf("\t Ingresa 8 valores \n ",i);
			scanf("%i",&valor);
			if (valor%2 == 0 )
				{
					printf("Par \n");
					par= par + 1;
				}
				else  
					{
						printf("Impar \n");
						impar= impar + 1;
					}
		}	
	
		
	tot= tot+valor;
	Ppar= tot/8;
	Pimpar= tot/8;
	
	printf("\n El promedio de lo valores pares es %5.2f \n",Ppar);
	printf("\n El promedio de los valores impares son %5.2f \n ",Pimpar);
	
	
	
	system("pause");	
	
}
	
// Ejercicio 5 

int main (){
	
	int i,grupo1=0,grupo2=0,grupo3=0,grupo4=0, entries=6, value;
	system ("cls");
	
	for (i=1;i<=entries;i++)
		{
			printf("Ingrese un valor \n ",entries);
			scanf("%i",&entries);
			if(value<=10){
				grupo1 = grupo1 + 1;
			}else if (value > 10 && value <=20){
				grupo2 = grupo2 + 1;
			}else if (value > 20 && value <=30){
				grupo3 = grupo3 + 1;
			}else{
				grupo4 = grupo4 + 1;
			}
		}
	
	printf("Hay %i entre 1 y 10 y representa el %f del total \n",grupo1,(float)entries*100 );
	printf("Hay %i entre 10 y 20 y representa el %f del total \n",grupo2,(float)entries*100 );
	printf("Hay %i entre 20 y 30 y representa el %f del total \n",grupo3,(float)entries*100 );
	printf("Hay %i mas de 30 y representa el %f del total \n",grupo4,(float)entries*100 );
	
	
	
	system ("pause");
		
}


































