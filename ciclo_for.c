#include <stdio.h>

int main()
{
    int i, x, y, n=1,m=1,f,t;
    while(n==1)
    {
        printf("1: imprimir los numeros del 1 al 100\n");
        printf("2: imprimir las tablas de multiplicar de un numero, del 1 al 20\n");
        printf("3: solucionar el factorial de un numero\n");
        printf("4: solucionar el numero de fibonacci\n");
        printf("5: pedir al usuario que ingrese 5 numeros aleatorios, y almacenarlos en un array, y mostrarlos en pantalla\n\n");
        printf("Digite la opcion: ");
        scanf("%d", &x);

        switch(x)
        {
        case 1:
            {
                for(i=1;i<=100;i++)
                {
                    printf("%d ",i);
                }
            }
            break;
        case 2:
            {
                printf("ingrese numero:\n");
                scanf("%d", &y);
                for(i=1;i<=20;i++)
                {
                    t= y*i;
                    printf("%d * %d = %d\n", y, i, t);
                }
            }
            break;

        case 3:
            {
                printf("ingrese numero:\n");
                scanf("%d", &f);
                for(i=1;i<=f;i++)
                {
                    m=m*i;
                }
                printf("el factorial es: %d",m);
            }

        }
        n=0;
    }
    return 0;
}
