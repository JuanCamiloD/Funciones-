#include <stdlib.h>
#include <stdio.h>
void menu();
void multi(float a, float b);
void cuadrado(float a);
void funpot(int a, int b);
void fraccion(int f);
void maximo(int f,int j,int i);
void intercambiar(int& f,int& j);
void cambio(int,int &,int &,int &,int &,int &,int &);
void tiempo(int i);
void calc_anos(int i);
float a,b;
int f,j,i,cien,cincuenta,veinte,diez,cinco,uno;
int main(){
	
	menu();
	
	system("pause");
	return 0;
}


void menu(){
		int opcion;
		do{
		
	
		printf("MENU\n");
	    printf("1. Multiplicar dos valores flotantes. \n");
		printf("2. El cuadrado de un numero. \n");
		printf("3. Elevar un numero a determinado exponente. \n");
		printf("4. Mostrar la parte fraccionaria de un numero. \n");
		printf("5. El valor maximo de 3 numeros. \n");
		printf("6. Intercambio de valores. \n");
		printf("7. Cambio de dolares. \n");
		printf("8. Mostrar segundos en tiempo parcial.\n");
		printf("Ingrese un opcion: \n");
		scanf("%d", &opcion);
		switch(opcion){
			case 1: multi(a,b);
				break;
			case 2: cuadrado(a);
				break;
			case 3:  funpot(a,b);
				break;
			case 4: fraccion(f);
				break;
			case 5: maximo(f,j,i);
				break;
			case 6: intercambiar(f, j);
				break;
			case 7: cambio(j,cien,cincuenta,veinte,diez,cinco,uno);
				break;
			case 8: tiempo(i);
				break;
			case 9: calc_anos(i);
				break;
			case 10: ;
				break;
			case 11: ;
				break;
			case 12: ;
				break;
			case 13: ;
				break;
			case 14: ;
				break;
			case 15: ;
				break;
			case 16: ;
				break;
			case 0: exit(0);
				break;
			default: printf("Opcion invalida\n");
		}
		system("pause");
		system("cls");
	}while(opcion != 0);
}

void multi(float a, float b){
	float c;
	printf("Digite dos numeros \n");
	scanf("%f %f",&a,&b);
	c = a*b;
  printf("El resutado es: %.2f",c);
}
void cuadrado(float a){
	float result;
	printf("Digite el numero elevar al cuadrado:");
	scanf("%f",&a);
	result=a*a;
	printf("El numero elevado al cubo es: %.2f",result);
	
}

void funpot(int a, int b){
	int result=1,i;
	printf("ingrese el valor a elevar:\n");
	scanf("%d",&a);
    printf("ingrese el valor al cual lo va a elevar:\n");
	scanf("%d",&b);
	for(i=1;i<=b;i++){
		result=result*a;
	}
    printf("la portencia es: %d\n",result);
		
}

void fraccion(int f){
  double e=0,r=0;
  int v=0;
   printf("ingrese un numero decimal:\n"); 
   scanf("%lf",&e);
   v=e;
   r=e-v;
   printf("los decimales del numero son: %.3lf ",r); 
 
}

void maximo(int f,int j,int i) {
	
	printf("ingrese los 3 valores:\n ");
	scanf("%d",&f);
	scanf("%d",&j);
	scanf("%d",&i);

      if(f>j&&f>i){
      		printf("El valor mayor es: %d\n",f);
		  } else if(j>f&&j>i){

	  		printf("El valor mayor es: %d\n",j);
		  }
	  else{
	   printf ("El valor mayor es: %d\n",i);
	  }
	  }
	
void intercambiar(int& f,int& j){
	printf(" ingrese el primer valor\n");
	scanf("%d",&f);
	printf(" ingrese el segundo valor\n");
	scanf("%d",&j);
	 int aux;
	 aux= f;
	 f=j;
	 j=aux;
	 printf ("Valor del primero: %d\n",f);
	 printf ("Valor del segundo: %d\n",j);
}

void cambio(int j,int & cien,int & cincuenta,int & veinte,int & diez,int & cinco,int & uno){

printf("Ingrese la cantidad de dolares: ");
scanf("%d",&j);

cien=j/100;
f=j%100 ;
cincuenta=f/50;
f=f%50;
veinte=f/20;
f=f%20;
diez=f/10;
f=f%10;
cinco=f/5;
f=f%5;
uno=f;
if(cien>0)
	printf("Billetes de cien: %d\n",cien);

if(cincuenta>0)
	printf("Billetes de cincuenta: %d\n",cincuenta);

if(veinte>0)
	printf("Billetes de veinte: %d\n",veinte);

if(diez>0)
	printf("Billetes de diez: %d\n",diez);
	
if(cinco>0)
	printf("Billetes de cinco: %d\n",cinco);

if(uno>0)
printf("Billetes de uno: %d\n",uno);

}

void tiempo(int i){
	int minuto=0,hora=0;
	printf("Ingrese la cantidad de segundos: ");
	scanf("%d",&i);
	while(i>59){
	
		if(i > 59){
			minuto += 1;
			i -= 60;
        }
    }
    	while(minuto>59){
	
		if(minuto > 59){
		hora += 1;
		minuto -= 60;
        }
    }
printf("%d : %d : %d\n",hora,minuto,i);
}

void calc_anos(int i){
	int anos=0,mes=0;
	printf("Ingrese la cantidad de dias: ");
	scanf("%d",&i);
	while(i>59){
	
		if(i > 30){
			mes += 1;
			i -= 30;
        }
    }
    	while(mes>12){
	
		if(mes > 12){
	     anos += 1;
		mes -= 12;
        }
    }
printf("%d : %d : %d\n",anos+2000,mes,i);
}

