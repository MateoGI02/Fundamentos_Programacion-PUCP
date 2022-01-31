#include <stdio.h>

int main (){
	char c;
	int suma=0;
	while(1) {
		printf ("Ingrese número: ");
		do{
			scanf("%c",&c);
			if (c!='\n' && c!='*' && c!=' '){
				int digito=c-'0';
				suma+=digito;
			}
		}while (c!='\n' && c!='*' );
		if (c=='*')
			break; 
	}
	printf("%d",suma);
}
