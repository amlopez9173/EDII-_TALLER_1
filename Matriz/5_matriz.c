#include <stdio.h>

int main(){

int x[5][5], i, n, m=1, y;

while(m==1){
printf("1. mostrar matriz\n");
printf("2. llenar matriz\n");
scanf("%d", &y);

switch(y){
    case 1:{
        for(i=0;i<5;i++){
            for(n=0;n<5;n++){
            printf("Ingrese numero fila %d columna %d: ", i+1, n+1);
            scanf("%d",&x[i][n]);
            }
        }

        for(i=0;i<5;i++){
            printf("\n");
            for(n=0;n<5;n++){
            printf("%d ",x[i][n]);
            }
        }
        }
        break;
    case 2:{
        int e=0;
        for(i=0;i<5;i++){
            printf("\n");
            for(n=0;n<5;n++){
                x[i][n]=e;
                printf("%d ",x[n][i]);
                e++;
            }
        }
        }
        break;
        default:{
            printf("numero incorrecto");
        }
    }
    printf("\nDesea realizar otra operacion 1.SI 0 2.NO ");
    scanf("%d",&m);
}
return 0;
}
