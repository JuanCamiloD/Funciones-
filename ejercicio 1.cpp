#include <stdlib.h>
#include <stdio.h>
#include <time.h>
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
void vectorsuma(int j);
void prueba(int j);
void cambio_signo(int j);
void mostrar_impares(int j);
void matriz_si(int f, int c);
void matriz_mayor_fila(int f,int c);
void mayor(int dia, int dia2,int mes, int mes2,int ano,int ano2);
void mostrar_array();
void mostrar_matriz();
void matriz_4x4();
void cadena_vocal();
void vocales_suma();
void array_num();
void array_menor();
void array_acendente();
void encontrar_numero();
void matriz_3x3();
void matriz_ram();
void matriz_primo();
void sumar_matrices();
void traspuesta();
float a,b;
int A=0,e=0,I=0,o=0,u=0,f,j,i,c,cien,cincuenta,veinte,diez,cinco,uno,dia,dia2,mes,mes2,ano,ano2;
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
		printf("9. Mostrar el cambio de dias a años.\n");
		printf("10. Suma de numeros en un vector.\n");
		printf("11. Verificacion de ordenamiento en un vector.\n");
		printf("12. Cambio de signo a un vector.\n");
		printf("13. Mostrar los impares de un vector.\n");
		printf("14. Verifica si una matriz es simetrica o no.\n");
		printf("15. Encontrar el numero menor en una fila determinada de una matriz.\n");
		printf("16. Verifica la fecha mas reciente.\n");
		printf("17. Mostrar vector con numeros.\n");
		printf("18. Ver matriz con 0s y 1s.\n");
		printf("19. Mostrar matriz elavada hasta 4.\n");
		printf("20. Ver cuantas vocales ahi en una palabra o nombre.\n");
		printf("21. Ver el numero de vocales que tiene un nombre .\n");
		printf("22. Array aleatoria que busca pares.\n");
		printf("23. Array aleatoria que busca el numero menor del arreglo.\n");
		printf("24. Mostrar arreglo de manera acendente.\n");
		printf("25. buscar un numero en particular.\n");
		printf("26. Mostrar la matriz con toda la suma de sus elementos.\n");
		printf("27. Matriz automatica.\n");
		printf("28. Matriz con numeros primos.\n");
		printf("29. Sumar dos matrices.\n");
		printf("30.Crear la matriz transpuesta .\n");
		printf("0. exit \n");
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
			case 10: vectorsuma(j);
				break;
			case 11: prueba(j);
				break;
			case 12:cambio_signo(j);
				break;
			case 13: mostrar_impares(j);
				break;
			case 14:  matriz_si(f,c);
				break;
			case 15: matriz_mayor_fila( f, c);
				break;
			case 16:mayor(dia,dia2,mes,mes2,ano,ano2) ;
				break;
			case 17: mostrar_array( );
				break;
			case 18: mostrar_matriz();
				break;
			case 19: matriz_4x4();
				break;
			case 20: cadena_vocal();
				break;	
			case 21: vocales_suma();
				break;	
			case 22: array_num() ; 
				break;	
			case 23: array_menor();
				break;
			case 24: array_acendente() ;
				break;
			case 25: encontrar_numero();
				break;
			case 26: matriz_3x3() ;
				break;	
			case 27: matriz_ram();
				break;	
			case 28: matriz_primo();
				break;	
			case 29: sumar_matrices() ;
				break;	
			case 30: traspuesta();
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

void vectorsuma(int j){
	const char l=20;
	int num[l],suma=0;
	printf("De que tamaño sera el vector:");
	scanf("%d",&j);
		for(int i=0;i<j;i++){
		printf("Escriba el numero %d: ",i+1);
		scanf("%d",&num[i]);
	}
	for(int i=0;i<j;i++){
		suma+=num[i];
	}
	printf("La suma de sus elementos es: %d\n",suma);
}

void prueba(int j){
		const char l=20;
	int num[l],tag=1;
	printf("De que tamaño sera el vector:");
	scanf("%d",&j);
		for( i=0;i<j;i++){
		printf("Escriba el numero %d: ",i+1);
		scanf("%d",&num[i]);
	}
    while((i<j)&&(tag==1)){ 
    if((num[i])>(num[i+1])) 
    tag=0; 
    i++; 
      } 

     if(tag==1) 
      printf("Los elementos del vector estan ordenados de modo creciente\n"); 
    else 
      printf("Los elementos del vector no estan ordenados de modo creciente\n"); 
}

void cambio_signo(int j){
	
	const char l=20;
	int num[l],cambio[l];
	printf("De que tamaño sera el vector:");
	scanf("%d",&j);
		for(int i=0;i<j;i++){
		printf("Escriba el numero %d: ",i+1);
		scanf("%d",&num[i]);
	}
	
	
    	for(int i=0;i<j;i++){
		cambio[i]=num[i];
		cambio[i];
		printf("La posicion #%d es: %d\n",i+1,cambio[i]*-1);
	}
	
}	

void mostrar_impares(int j){
	
   const char l=20;
	int num[l],impares[l];
	printf("De que tamaño sera el vector:");
	scanf("%d",&j);
		for(i=0;i<j;i++){
		printf("Escriba el numero %d: ",i+1);
		scanf("%d",&num[i]);
	}

  for(i=0;i<j;i++){
  
    if(num[i] % 2 == 0){
	}else{
	
       impares[i]=num[i];
	   printf("los impares son : %d \n",impares[i]);
	   }
     }
 
  
}

void matriz_si(int f, int c){
	int num[100][100];
	char band='F';
	
	printf("Digite el numero de filas: "); 
	scanf("%d",&f);
    printf("Digite el numero de columnas: "); 
	scanf("%d",&c);

	for( i=0;i<f;i++){
		for( j=0;j<c;j++){
				printf("Digite el numero en la pocision #%d , #%d: ",i,j); 
	            scanf("%d",&num[i][j]);
		}
	}
	
	
	if(f==c){
		for(int i=0;i<f;i++){
			for(int j=0;j<c;j++){
				if(num[i][j] == num[j][i]){
					band='V';
				}
			}
		}
	}

	if(band=='V'){
		printf("\nEs una matriz simetrica \n");
	}
	else{
		printf("\nNo es una matriz simetrica \n");
	}
}


void matriz_mayor_fila(int f,int c){
	const char l=20;
	int num[l][l],menor=99999;
	printf("Digite el numero de filas: "); 
	scanf("%d",&f);
    printf("Digite el numero de columnas: "); 
	scanf("%d",&c);

	for( i=0;i<f;i++){
		for( j=0;j<c;j++){
				printf("Digite el numero en la pocision #%d , #%d: ",i,j); 
	            scanf("%d",&num[i][j]);
		}
	}
	
	printf("Digite el numero de la  fila: \n"); 
	scanf("%d",&f);
    
	for( i=f;i<=f;i++){
		for( j=0;j<c;j++){
				if(num[i][j]<menor){
					menor=num[i][j];
				}
		}
	}
	printf("el numero menor es: %d",menor);
}

void mayor(int dia, int dia2,int mes, int mes2,int ano,int ano2){
	printf("ingrese la primera fecha (dd mm aa): \n");
	scanf("%d",&dia);
	scanf("%d",&mes);
	scanf("%d",&ano);
	printf("ingrese la segunda fecha (dd mm aa): \n");
	scanf("%d",&dia2);
	scanf("%d",&mes2);
	scanf("%d",&ano2);
	if (ano<ano2||mes<mes2||dia<dia2){
		printf("La fecha mas reciente es: %d / %d /%d \n",dia2,mes2,ano2);
	}else{
	printf("La fecha mas reciente es: %d / %d /%d \n",dia,mes,ano);	
	}
	
}

void mostrar_array(){
	float num[]={32.583,11.239,45.781,22.237};
	 printf("Los elementos del arreglo son:\n");
	for( i=0;i<4;i++){
    printf("%.3f\n", num[i]);
	}
}

void mostrar_matriz(){
	int n=1,a=0;
	printf("Digite el numero de filas: "); 
	scanf("%d",&f);
    printf("Digite el numero de columnas: "); 
	scanf("%d",&c);

for(i=0;i<f;i++){
		for( j=0;j<c;j++){
			if(i==j){
			printf("[%d]",n);	  
		}else
			printf("[%d]",a);
		
		}
		printf("\n");
	  
	  }
	   
}

void matriz_4x4(){
	int num[4][4];
	for(i=0;i<1;i++){
		for( j=0;j<4;j++){
			printf("digite el numero en la posicion #%d : ",j+1);
			scanf("%d",&num[i][j]);
		}
	}
	
	for(i=0;i<1;i++){
		for( j=0;j<4;j++){
	printf("[%d]", num[0][j]);
		}
		printf("\n");
	}
	
	for(i=1;i<4;i++){
		for( j=0;j<4;j++){
		
            if(i == 1){
                printf("[%d]", num[0][j]*num[0][j]);
            }else if(i == 2){
                printf("[%d]", num[0][j]*num[0][j]*num[0][j]);
            }else if(i == 3){
                printf("[%d]", num[0][j]*num[0][j]*num[0][j]*num[0][j]);
        }
		}
        printf("\n");
    }

}

void cadena_vocal(){
const char l=20;
char c1 [l];
 printf("Digite una palabra para determinar cuantas veces esta una vocal en ella: ");
 fflush(stdin); //borra el bufer de entrada
 fgets (c1, l, stdin);
 	
	
	for( i=0;i<l;i++){
		if (c1[i]==97){
			A++;
		}
	}
		for( i=0;i<l;i++){
		if (c1[i]==101){
			e++;
		}
	}
		for( i=0;i<l;i++){
		if (c1[i]==105){
			I++;
		}
	}
	
		for( i=0;i<l;i++){
			if (c1[i]==111){
			o++;
		}
	}
		for( i=0;i<l;i++){
			if (c1[i]==117){
			u++;
		}
	}
	
		printf("la cantidad de vocales que ahi es:%d\n ",A+e+I+o+u);
		
		
}

void vocales_suma(){
const char l=20;
char c1 [l];
	printf("Digite una palabra para determinar cuantas veces esta una vocal en ella: ");
    fflush(stdin);
	fgets(c1,15,stdin);
	for(int i=0;i<l;i++){
		if (c1[i]==97){
			A++;
		}
	}
		for(int i=0;i<l;i++){
		if (c1[i]==101){
			e++;
		}
	}
		for(int i=0;i<l;i++){
		if (c1[i]==105){
			I++;
		}
	}
	
		for(int i=0;i<l;i++){
			if (c1[i]==111){
			o++;
		}
	}
		for(int i=0;i<l;i++){
			if (c1[i]==117){
			u++;
		}
	}
	if(A>=1){
	
	printf("la cantidad de veces que esta la vocal a es:%d \n",A);
	}else{
	}
	
	if(e>=1){
		
		printf("la cantidad de veces que esta la vocal e es:%d\n ",e);
		}else{
		}
	
	if(I>=1){
		printf("la cantidad de veces que esta la vocal i es:%d\n ",I);
		}else{
		}
	
	if(o>=1){
		printf("la cantidad de veces que esta la vocal o es:%d\n ",o);
		}else{
		}
	
	if(u>=1){
		printf("la cantidad de veces que esta la vocal u es:%d\n ",u);
		}else{
		}
}

void array_num(){
	srand(time(NULL));
	int num[10],n;
	
	for (i=0;i<10;i++){
		n=rand()%100;
		num[i]=n;
		}
	
	for (i=0;i<10;i++){
      if ( num[i] % 2 == 0 ){
	
      printf("%d\n",num[i]);
    }
   }
}

void array_menor(){
	srand(time(NULL));
	int num[100],n,menor;
	printf("ingrese el tamaño del vector : \n");
	scanf("%d",&f);
	for (i=0;i<f;i++){
		n=rand()%100;
		num[i]=n;
		}
		
		for(int i=0;i<f;i++){
		if(num[i]<menor){
		menor=num[i];
		}
	}
	printf("El elemento menor es: %d\n",menor);
}

void array_acendente(){
	
	int num[100],n,aux;
	printf("Escriba el tamaño del vector: \n");
	scanf("%d",&n);
		for(int i=0;i<n;i++){
		printf("digite el elemente #%d del vector: \n",i+1);
	    scanf("%d",&num[i]);
	}
	for (i=0; i<n-1; i++){
        for (j=i+1; j<n; j++) {
           if(num[i]>num[j]){
                aux = num[i];
                num[i] = num[j];
                num[j] = aux;
            }
           }
         }
       for(int i=0;i<n;i++){
		printf("los elementos del vector son: %d \n",num[i]);}
}

void encontrar_numero(){
	int num[100],n,busqueda,ban=0;
	
	printf("Escriba el tamaño del vector: \n");
	scanf("%d",&n);
		for(int i=0;i<n;i++){
		printf("digite el elemente #%d del vector: \n",i+1);
	    scanf("%d",&num[i]);
	}
	
	printf("¿Que numero desea buscar en el arreglo?\n");
	scanf("%d",&busqueda);
	for(int i=0;i<n;i++){
		if(num[i]==busqueda){
			printf("Si esta.\n");
	        ban=1;
		
		}
		}
		if(ban==0){
		
		printf("No esta.\n");}
	
	
}

void matriz_3x3(){
    int m1[3][3],suma=0;

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("digite los numero de la matriz :");
			scanf("%d",&m1[i][j]);
		}	
	}
	
	
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){ 
		suma+=m1[i][j];
			
		}
	}
	
	printf("La suma de los elementos de la matriz es: %d\n",suma);
}

void matriz_ram(){
	int m1[3][3],n;
    srand(time(NULL)); 
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			n=rand()%101;
			m1[i][j]=n;
			
		}	
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){ 
		printf("[%d]",m1[i][j]);
			
		}
		printf("\n");
	}
}

void matriz_primo(){
	int m1[3][3],n,f;
    srand(time(NULL)); 
  
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			
			n=rand()%21;
			for(f=1;f<9;f++){
			
			if(n%f==0){
             A++;
         
            }
        } if(A==2){
            m1[i][j]=n;
            f=0;
			}
			
		}	
	}
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){ 
		printf("[%d]",m1[i][j]);
			
		}
		printf("\n");
	}
	
}

void sumar_matrices(){
	
		int m1[20][20],m2[20][20],m3[20][20];
		printf("ingrese el numero de filas :");
		scanf("%d",&f);
		printf("ingrese el numero de columnas :");
		scanf("%d",&c);
		for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			printf("digite un numero de la matriz 1:");
			scanf("%d",&m1[i][j]);
		}	
		
	}
		for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			printf("digite un numero de la matriz 2:");
			scanf("%d",&m2[i][j]);
		}	
	}
		for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			m3[i][j]=m1[i][j]+m2[i][j];
		printf("[%d]",m3[i][j]);
		}
		printf("\n");	
	}
}

void traspuesta(){
	int m1[20][20];
    printf("ingrese el numero de filas :");
	scanf("%d",&f);
	printf("ingrese el numero de columnas :");
	scanf("%d",&c);
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			printf("digite un numero:");
			scanf("%d",&m1[i][j]);
		}	
	}
		for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){ 
			printf("[%d]",m1[j][i]);
			
		}
		printf(" \n");
	}
}
