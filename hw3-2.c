#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d, e;
    scanf("%d %d", &d, &e);
    int a1, a2, a3, a4, b1, b2, b3, b4;
    a1 = d / 1000;
    a2 = (d - a1 * 1000) / 100;
    a3 = (d - a1 * 1000 - a2 * 100) / 10;
    a4 = (d - a1 * 1000 - a2 * 100 - a3 * 10);

    b1 = e/ 1000;
    b2 = (e - b1 * 1000) / 100;
    b3 = (e - b1 * 1000 - b2 * 100) / 10;
    b4 = (e - b1 * 1000 - b2 * 100 - b3 * 10);

    int f,g ;
    f= a1 + a2 + a3 + a4;
    g = b1 + b2 + b3 + b4;

    if(f>g){
        printf("%d\n",e);
    }
    else if(f<g){
        printf("%d\n",d);
    }
    else{
        if(d>e){
            printf("%d\n",e);
        }
        else if(d<e){
            printf("%d\n",d);
        }

    }
}
