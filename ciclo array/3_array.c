#include <stdio.h>
#include <math.h>

int main()
{
    int i, n=1, a, z, y, e;
    float x[4];

    while(n==1)
    {
        system("cls");
        printf("1: array de 4 numeros decimales\n");
        printf("2: Arreglo bidimensional\n");
        printf("3: array 4x4\n");
        printf("digite la opcion: ");
        scanf("%d", &a);

        if(a==1)
        {
            x[0]=32.583;
            x[1]=11.239;
            x[2]=45.781;
            x[3]=22.237;
            for(i=0;i<4;i++)
            {
                printf("%2.3f\n", x[i]);
            }
        }
        else
        {
            if(a==2)
            {
                printf("ingrese primer numero: ");
                scanf("%d", &y);
                printf("Ingrese segundo numero: ");
                scanf("%d", &z);

                int t[y][z], a=0;
                for(i=0;i<y;i++)
                {
                    printf("\n");
                    for(e=0;e<z;e++)
                    {
                        t[i][e]=a;
                        printf("%d ", t[i][e]);
                        if(a==0)
                        {
                            a=1;
                        }
                        else
                        {
                            a=0;
                        }
                    }
                }
            }
            else
            {
                if(a==3)
                {
                    int x1[4][4];
                    for(i=0;i<4;i++)
                    {
                        printf("ingrese numero %d del vector: ", i+1);
                        scanf("%d", &x1[0][i]);
                    }

                    for(i=0;i<4;i++)
                    {
                        printf("\n");
                        for(e=0;e<4;e++)
                        {
                            if(i==0)
                            {
                                printf("%d ", x1[i][e]);
                            }
                            if(i==1)
                            {
                                x1[i][e]=pow(x1[0][e],2);
                                printf("%d ", x1[i][e]);
                            }
                            if(i==2)
                            {
                                x1[i][e]=pow(x1[0][e],3);
                                printf("%d ", x1[i][e]);
                            }
                            if(i==3)
                            {
                                x1[i][e]=pow(x1[0][e],4);
                                printf("%d ", x1[i][e]);
                            }
                        }
                    }
                }
                else
                {
                    printf("Seleccione la opcion correcta");
                }
            }
        }
        printf("\nDesea realizar otra operacion 1.SI o 2.NO: ");
        scanf("%d", &n);
    }


    return 0;
}
