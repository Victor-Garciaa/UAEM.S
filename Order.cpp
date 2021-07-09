#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

void fill (char cam[15][15],int *day);
int val(int num);
void identifier(int cont,int horario[7][15]);

typedef struct {
    int time[15];
} Subject;

int main (){

char materias [15][15];
int horario [7][15];
int control=1;
int contador;
printf("Este programa tiene como funcion organizar tus materias y ser eficiente y eficaz en el rpoceso \n");
system("cls");

do {
printf("Ingresa una materia \n");
// Utilizamos la funcion fill para ubicar las materias y conocer cuantos dias de la semana toca la materia
fill(materias,&contador);
printf ("¿Deseas ingresar otra materia?(Si=1,No=2) \n");
scanf("%d",&control);
// Validamos
control=val(control);
system("cls");
}while (control==1);
// Utilizamos la funcion identifier para identificar que dias de la seman se toma la clase y establecemos un horario 
identifier(contador,horario);

    return 0;
}

//::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
int val(int num){

while (num!=1 || num!=2){
printf("Ingresa una opcion valida, (Si=1,No=2) \n");
scanf("%d",&num);
  }
 return num;
}

//::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
void fill(char cam[15][15],int *day){
    char x[15];
    static int i=0;
    int j=0;
    int dias;
    Subject x;
printf("ingresa el nombre de tu materia \n");
fflush(stdin);
fgets(x,15,stdin);

// Verificamos que se llene correctamente el arreglo con unos condicionales
if (i<15){
strcpy(&cam[i][j],x);
i++;
}

// Solicitamos el horario
printf("¿Cuantas dias a la semana tienes la materia?");
scanf("%d",&dias);
*day=dias;
}

//::::::::::::::::::::::::::::::::::::::::::::::::::::
void identifier(int cont,int horario[7][15]){
   int i,j,k=0;
    char week [7][15]={{"LUNES"},{"MARTES"},{"MIERCOLES"},{"JUEVES"},{"VIERNES"},{"SABADO"},{"DOMINGO"}};
    char day[7][15];
    char init[10];
    printf("Ingresa que dias tomas la materia");

    for(i=0;i<cont;i++){
     fgets(init,15,stdin);
     strupr(init);
     day[i][j]=*init;
    }
    
    for (i=0;i<cont;i++){
      for (j=0;j<cont;j++){
      if (strncmp(&day[i][k],&week[j][k],5)==0){
         printf("Cuantas veces ");
      }

      }
    }
}
