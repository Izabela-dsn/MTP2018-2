/*P4.c
Izabela da Silva
11811ECP026*/

#include <stdio.h>

int funcAckermann(int m, int n){
     int soma;
    if(m == 0){
        soma = n+1;
    }
    else if( m > 0 && n == 0){
            funcAckermann(m-1,1);
    }
    if(m>0 && n>0){
        funcAckermann(m-1,funcAckermann(m,n-1));
    }
}


int main(){
    int m, n, soma;
    printf("Digite valores para m e n respectivamente: ");
    scanf("%i%i", &m,&n );
    soma = funcAckermann(m,n);
    printf(" %d + %d resulta em %d ", m , n , soma);


return 0;
}
