/* Nome: Izabela da Silva Neves */
/* Matricula: 11811ECP026 */

#include <stdio.h>

int main(){
	char num[256];
	int i, numt = 0, j = 1, k;
	
	scanf("%s", &num);
	
	for(i=0;num[i] != '\0';i++){
			if(num[i] == '9'){
				numt = numt + 9 * j;
				j = j*10;
			}
			else if(num[i] == '8'){
				numt = numt + 8* j;
				j = j*10;
			}		
			if(num[i] == '7'){
				numt = numt + 7 *j;
				j = j*10;
			}		
			else if(num[i] == '6'){
				numt = numt + 6 *j;
				j = j * 10;
			}		
			if(num[i] == '5'){
				numt = numt + 5 * j;
				j = j * 10;
			}		
   			else if(num[i] == '4'){
   				numt = numt + 4 *j;
   				j = j * 10;
			   }		
			if(num[i] == '3'){
				numt = numt + 3 * j;
				j = j*10;
			}		
			else if(num[i] == '2'){
				numt = numt + 2 *j;
				j = j*10;
			}		
			if(num[i] == '1'){
				numt = numt + 1 *j;
				j = j*10;
			}		
			else if(num[i] == '0'){
				numt = numt + 0 *j;
				j = j*10;
			}			
	}
	if(numt >= 0){
		while(numt != 0){
			k=numt%10;
			printf("%d", k);
			numt /= 10;	
		}
	}
	else if(numt < 1){
		numt = numt * -1;
			while(numt != 0){
				k=numt%10;
				printf("%d", k);
				numt /= 10;	
		}	
	}	
	
	return 0;
}
