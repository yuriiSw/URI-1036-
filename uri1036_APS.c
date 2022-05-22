#include <stdio.h>
#include <math.h>

float a,b,c,delta,x1,x2;

int main(int argc, char const *argv[])
{
    printf("Coloque os valores para fazer a equacao:\n");
    scanf("%f %f %f %f", &a,&b,&c);

    delta= b*b - 4.*a*c;

    if (delta >=0)
    {

        x1 = (-b + (delta))/(2.*a);
        x2 =(-b - (delta))/(2.*a);

        
    }
    else {A
    printf("VALOR INVALIDO!!");
 }
 return 0;
} 