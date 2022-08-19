 #include <stdio.h>

#include <math.h>
int main() {

int X,Y; //declarei variaveis x equivale ao item e y a quantidade

scanf("%d %d",&X,&Y); // leitura e armazenamento das variaveis

if (X==1) // se x e igual a 1

printf("Total: R$ %.2f\n",4.00*Y); // imprima a seguinte mensagem

else // se nao

if (X==2) // entao se x igual a 2

printf("Total: R$ %.2f\n",4.50*Y); // imprima a seguinte mensagem

else // se nao

if (X==3) // se x igual a 3

printf("Total: R$ %.2f\n",5.00*Y); // imorima a seguinte mensagem

else //se nao 

if (X==4) // se x igual a 4

printf("Total: R$ %.2f\n",2.00*Y); //  imprima a seguinte mensagem

else // se nao 

if (X==5) // se x igual a 5

printf("Total: R$ %.2f\n",1.50*Y); // imprima a seguinte mensagem

return 0; // retorne ao main
}
