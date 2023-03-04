#include <stdio.h>
#include <stdlib.h>


int main()
{
    double n,x,y;
    int i1=0,i2=0,d,a,b;

    while(b=1){
    printf("Indique um numero:");
    scanf("%lf",&n);

    if(n < 0){
        printf("O usuario introduziu informacao invalida!\n");

    }
    if(n>0){
        break;
    }
    }
    while(b=1){
    printf("Indique o numero, entre 1 e 7, de casas decimais que deseja de ver o seu numero arredondado:");
    scanf("%d", &d);

    if(d > 7 || d < 0){
        printf("O usuario introduziu informacao invalida! \n");

    }
        if( d<=7 && d>=1){
            break;
        }
    }


    while(i1<d){
        n=n*10;
        i1++;
        a=n+0.5;
    }
    y=a;
    while(i2<d){
        y=y/10;
        i2++;
    }
    printf("%lf", y);
    return 0;

}
