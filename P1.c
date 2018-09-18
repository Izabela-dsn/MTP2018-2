/* P1.c */
/* Izabela da Silva */
/* 11811ECP026 */ 

#include <stdio.h>

int main(){
	int estado = 0, i; 
	char binario[256];
	
	
	scanf("%s", binario);
	
	while(binario[i] != '\0'){
		if(estado == 0 && binario[i] == '0'){
			estado = 0;
		}
		else if(estado == 0 && binario[i] == '1'){
			estado = 1;
		}
		else if(estado == 1 && binario[i] == '0'){
			estado = 2;
		}
		else if(estado == 1 && binario[i] == '1'){
			estado = 0;
		}
		if(estado == 2 && binario[i] == '1'){
			estado = 2;
		}
		else if(estado == 2 && binario[i] == '0'){
			estado = 1;
		}
		if(estado == 0){
		printf("\"%s\" e multiplo de 3\n", binario );
		}
	    else if(estado == 1){
		printf("\"%s\" nao e\n", binario);
		} 
		break;
	}
	
	return 0;
}
