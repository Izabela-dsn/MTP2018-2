#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

    typedef struct{
        double x;
        double y;
    } pontos;

    int N,i;
    pontos *P;
    printf("numero de pontos desejados: ");
    scanf("%d", &N);
    getchar();
    P = (pontos *) malloc(N*sizeof(pontos));

    for(i=0;i<N;i++){
      P->x=cos(i*2.0*M_PI/(N-1));
      P->y=sin(i*2.0*M_PI/(N-1));
        printf("(%.3lf, %.3lf) ", P->x, P->y);
    }
    free(P);


 return 0;
}
