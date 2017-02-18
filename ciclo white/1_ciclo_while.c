#include <stdio.h>

int main()
{
    int t=1, x, c, i;
    while(t==1)
    {
        c=0;
        printf("1: imprimir los numeros del 1 al 10\n");
        printf("2: sumar numeros del 1 al 100\n");
        printf("3: sumar numeros pares del 1 al 150\n");
        printf("4: sumar los numeros impares del 1 al 150\n");

        printf("seleccione una opcion: ");
        scanf("%d", &x);

        if(x==1)
        {
            for(i=1;i<=10;i++)
            {
                printf("%d\n",i);
            }
        }
        else
        {
            if(x==2)
            {
                for(i=1;i<=100;i++)
                {
                    c= c+i;
                }
                printf("la suma es: %d\n",c);
            }
            else
            {
                if(x==3)
                {
                    for(i=1;i<=150;i++)
                    {
                        if(i%2==0)
                        {
                            c=c+i;
                        }
                    }
                    printf("%d\n",c);
                }
                else
                {
                    if(x==4)
                    {
                        for(i=1;i<=150;i++)
                        {
                            if(i%2!=0)
                            {
                                c=c+i;
                            }
                        }
                        printf("%d\n",c);
                    }
                    else
                    {
                        printf("ingrese numero correcto\n");
                    }
                }
            }
        }
        printf("Desea realizar otra operacion: 1.SI   2.NO \n");
        scanf("%d", &t);
        system("cls");
    }
    return 0;
}
