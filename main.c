#include <stdio.h>

char YesOrNoSTART;
int AnoNeOdpoved;
int VstupNEBOescape2;

char Otazka1 [] = "1. otazka: Kolik bitu ma jeden bajt?";
char Odpoved1;
int Odpoved1cast2;
int kontrolaOdpovedi1cast2;


int VstupNEBOescape(){
	
	if (YesOrNoSTART == 'N') {
		
		AnoNeOdpoved = 0;
		
		}

	if (YesOrNoSTART == 'A') {
		
		AnoNeOdpoved = 1;
		
		}	

	else {
		
		AnoNeOdpoved = 0;
		
		}	
		
				
	
	return AnoNeOdpoved;
	
}



int kontrolaOdpovedi1(){
	
	
	if (Odpoved1 == 'B'){
	Odpoved1cast2 = 1;
	
	}
	
	
	else {
	Odpoved1cast2 = 0;
	}
	
	
	
	return Odpoved1cast2;
	}
	




int main(){
	
	printf("Ahoj, jsem rad, ze sis vobstaral tuhle skvelou hru !\n");
	printf("-------------------------------------------------------------------\n");
	printf("Chces pokracovat? A/N :\n");
	
	scanf("%c", &YesOrNoSTART);
	int VstupNEBOescape2 = VstupNEBOescape();
	
		if (VstupNEBOescape2 == 0) {
		
		printf("Skoda, tak snad priste :(");
		
		}		
		
		else {
		
		printf("Skvele :)\n");
		
		printf("-------------------------------------------------------------------\n");
		
		printf("%s\n", Otazka1);
		printf("A) 16\n");	
		printf("B) 8\n");
		printf("C) 32\n");
		printf("D) 1000\n");	
		scanf("Zadejte odpoved A, B, C, nebo D: %c", &Odpoved1);
		
		int kontrolaOdpovedi1cast2 = kontrolaOdpovedi1();
		
		if (kontrolaOdpovedi1cast2 == 0){
			printf("spatne :(\n");
			
		}	

		else {
			printf("Vyborne, spravne!\n");
			
		}					
			
		}	
	
	
	
	
	return 0;
}



