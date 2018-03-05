#include <stdio.h>
#include <string.h>
	
char frase[100];


int ContVocal(char *);
int ContConsonantes(char *);
int caracteres(char *);
int espaciosBlancos(char *);
void MuestraEnPantalla();

	
int main(){
				
			MuestraEnPantalla();
		
}


int ContVocal(char *Vocal){
	
		int contador = 0;
		
		while(*Vocal){
			
			switch(*Vocal){
						
					case 'A':
					case 'E':
					case 'I':
					case 'O':
					case 'U':
						contador ++;
			}
			Vocal++;
		}
	return contador;
}

int ContConsonantes(char *Consonantes){
	
	int contador = 0;
	
	while(*Consonantes){
	
		switch(*Consonantes){
			
				case 'B':
				case 'C':
				case 'D':
				case 'F':
				case 'G':
				case 'H':
				case 'J':
				case 'K':
				case 'L':
				case 'M':
				case 'N':
				case 'Ñ':
				case 'P':
				case 'Q':
				case 'R':
				case 'S':
				case 'T':
				case 'V':
				case 'W':
				case 'X':
				case 'Y':
				case 'Z':
					contador++;
						
		}
		Consonantes++;
	
	}
	return contador;
	
}

int caracteres(char *FRASE){

	int numCaracteres = strlen(FRASE);

	return numCarac teres;
}

int espaciosBlancos(char *Blanco){

	int contador = 0;
	
		while(*Blanco){
			
			switch(*Blanco){

				case ' ':
					contador++;
			}
			
			Blanco++;
			
		}
	return contador;
}

void MuestraEnPantalla(){
	
	printf("Ingresa una frase: ");

	gets(frase);
	
	strupr(frase);

	printf("\nEl numero de vocales es de: %d ", ContVocal(frase));

	printf("\nEl numero de consonantes es de: %d", ContConsonantes(frase));
	
	printf("\nEl numero de caracteres es de: %d ",caracteres(frase));

	printf("\nEl numero de espacios en blanco es de: %d ",espaciosBlancos(frase));	

}
