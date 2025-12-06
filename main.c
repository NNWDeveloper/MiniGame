// ====================================================================
// SIMPLE IT QUIZ CODED IN C BY MATĚJ TRUXA - NNW Developer
// ====================================================================

#include <stdio.h>

char YesOrNoSTART;
int AnoNeOdpoved;
int VstupNEBOescape2;

char Otazka1 [] = "1. otazka: Kolik bitu ma jeden bajt?";
char Odpoved1;
int Odpoved1cast2;

char Otazka2 [] = "2. otazka: Ktery datovy typ v jazyce C slouzi typicky k ukladani celych cisel?";
char Odpoved2;
int Odpoved2cast2;

char Otazka3 [] = "3. otazka: Ktery prikaz v Linuxu slouzi k zobrazeni aktualniho pracovniho adresare?";
char Odpoved3;
int Odpoved3cast2;


char Otazka4 [] = "4. otazka: Co oznacuje zkratka SSD ?";
char Odpoved4;
int Odpoved4cast2;


int konecnaHodnotaProKonecAplikace;


int VstupNEBOescape(){
    if (YesOrNoSTART == 'N') {
        AnoNeOdpoved = 0;
    }
    else if (YesOrNoSTART == 'A') {
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
    } else {
        Odpoved1cast2 = 0;
    }
    return Odpoved1cast2;
}

int kontrolaOdpovedi2(){
    if (Odpoved2 == 'C'){
        Odpoved2cast2 = 1;
    } else {
        Odpoved2cast2 = 0;
    }
    return Odpoved2cast2;
}


int kontrolaOdpovedi3(){
	if (Odpoved3 == 'D'){
		Odpoved3cast2 = 1;
	} else {
		
		Odpoved3cast2 = 0;
	}
	
	return Odpoved3cast2;
}


int kontrolaOdpovedi4(){
	if (Odpoved4 == 'A'){
		Odpoved4cast2 = 1;
	} else {
		
		Odpoved4cast2 = 0;
	}
	
		return Odpoved4cast2;
}


int main(){
    printf("Ahoj, jsem rad, ze sis vobstaral tuhle skvelou hru !\n");
    printf("-------------------------------------------------------------------\n");
    printf("Chces pokracovat? A/N :\n");

    scanf("%c", &YesOrNoSTART);
    int VstupNEBOescape2 = VstupNEBOescape();

    if (VstupNEBOescape2 == 0) {
        printf("Skoda, tak snad priste :(");
        return 0;
    }

    printf("Skvele :)\n");
    printf("-------------------------------------------------------------------\n");



    // ====================================================================
    // OTÁZKA 1 — OPRAVENÝ DO-WHILE BLOK !!!
    // ====================================================================
    do {
        printf("%s\n", Otazka1);
        printf("A) 16\n");
        printf("B) 8\n");
        printf("C) 32\n");
        printf("D) 1000\n");
        printf("Zadejte odpoved A, B, C, nebo D: ");
        scanf(" %c", &Odpoved1);

        Odpoved1cast2 = kontrolaOdpovedi1();

        if (Odpoved1cast2 == 0){
        	printf("-------------------------------------------------------------------\n");
            printf("spatne, zkus to znova :(\n");
            printf("-------------------------------------------------------------------\n");
        }

    } while (Odpoved1cast2 == 0);

	printf("-------------------------------------------------------------------\n");
    printf("Vyborne, spravne!\n");
    printf("-------------------------------------------------------------------\n");



    // ====================================================================
    // OTÁZKA 2 — OPRAVENÝ DO-WHILE BLOK !!!
    // ====================================================================
    do {
        printf("%s\n", Otazka2);
        printf("A) float\n");
        printf("B) char\n");
        printf("C) int\n");
        printf("D) double\n");
        printf("Zadejte odpoved A, B, C, nebo D: ");
        scanf(" %c", &Odpoved2);

        Odpoved2cast2 = kontrolaOdpovedi2();

        if (Odpoved2cast2 == 0){
        	printf("-------------------------------------------------------------------\n");
            printf("spatne, zkus to znova :(\n");
            printf("-------------------------------------------------------------------\n");
        }

    } while (Odpoved2cast2 == 0);

	printf("-------------------------------------------------------------------\n");
    printf("Vyborne, spravne!\n");
    printf("-------------------------------------------------------------------\n");
    
    
    // OTAZKA 3.
    
    do {
    	printf("%s\n", Otazka3);
    	printf("A) ls\n");
        printf("B) cd\n");
        printf("C) cat\n");
        printf("D) pwd\n");
         printf("Zadejte odpoved A, B, C, nebo D: ");
        scanf(" %c", &Odpoved3);
        
        Odpoved3cast2 = kontrolaOdpovedi3();
        if (Odpoved3cast2 == 0){
        	printf("-------------------------------------------------------------------\n");
        	printf("spatne, zkus to znova :(\n");
        	printf("-------------------------------------------------------------------\n");
		}
        
	} while (Odpoved3cast2 == 0);
	
	printf("-------------------------------------------------------------------\n");
	 printf("Vyborne, spravne!\n");
    printf("-------------------------------------------------------------------\n");
 
 
 
 // OTAZKA 4.
    
    do {
    	printf("%s\n", Otazka4);
    	printf("A) Solid State Drive\n");
        printf("B) Super Speed Disk\n");
        printf("C) System Storage Device\n");
        printf("D) Static Secure Drive\n");
         printf("Zadejte odpoved A, B, C, nebo D: ");
        scanf(" %c", &Odpoved4);
        
        Odpoved4cast2 = kontrolaOdpovedi4();
        if (Odpoved4cast2 == 0){
        	printf("-------------------------------------------------------------------\n");
        	printf("spatne, zkus to znova :(\n");
        	printf("-------------------------------------------------------------------\n");
		}
        
	} while (Odpoved4cast2 == 0);
	
	printf("-------------------------------------------------------------------\n");
	 printf("Vyborne, spravne!\n");
    printf("-------------------------------------------------------------------\n");   
    
    
// ====================================================================
// KONEC APLIKACE
// ====================================================================
    printf("Pro ukonceni programu zadejte cislo: ");
    scanf("%d", &konecnaHodnotaProKonecAplikace);

    return 0;
}


