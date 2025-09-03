#include <stdio.h>
#include <math.h>

int main ()
{
//declarando variaveis
int a, b, c;

//lendo os catetos a e b
scanf("%d %d", &a, &b);

//calculando a hipotenusa c
c = pow(sqrt((pow(a, 2)) + (pow(b, 2))), 2);

//output
printf("%d", c);

return 0;
}
