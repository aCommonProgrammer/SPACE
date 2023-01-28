#include <iostream>
#include <time.h>
#include <iomanip>
#include <cstdlib>

//DEFINIZIONE DEI COLORI
    #define RESET   "\033[0m"
    #define NERO    "\033[30m"
    #define ROSSO   "\033[31m"
    #define VERDE   "\033[32m"
    #define GIALLO  "\033[33m"
    #define BLU     "\033[34m"
    #define MAGENTA "\033[35m"
    #define CIANO   "\033[36m"
    #define BIANCO  "\033[37m"
    //COLORI PER LE LETTERE IN GRASSETTO
    #define G_NERO   "\033[1m\033[30m"
    #define G_ROSSO  "\033[1m\033[31m"
    #define G_VERDE   "\033[1m\033[32m"
    #define G_GIALLO  "\033[1m\033[33m"
    #define G_BLU    "\033[1m\033[34m"
    #define G_MAGENTA "\033[1m\033[35m"
    #define G_CIANO    "\033[1m\033[36m"
    #define G_BIANCO   "\033[1m\033[37m"
    //COLORI DELLO SFONDO
    #define B_NERO    "\033[40m"
    #define B_ROSSO   "\033[41m"
    #define B_VERDE   "\033[42m"
    #define B_GIALLO  "\033[43m"
    #define B_BLU     "\033[44m"
    #define B_MAGENTA "\033[45m"
    #define B_CIANO   "\033[46m"
    #define B_BIANCO  "\033[47m"

//DEFINIZIONE DELLE VARIABILI DEL PROGRAMMA
    #define RIGHE 63
    #define COLONNE 237
    #define RIGHE_MEDUSA 4
    #define COLONNE_MEDUSA 3
    #define RIGHE_ASTRONAVE 3
    #define COLONNE_ASTRONAVE 3

char astronave[RIGHE_ASTRONAVE][COLONNE_ASTRONAVE] = {'/', (char) 219,'\\',(char) 219,(char) 220,(char) 219,' ',(char) 176};
char medusa[RIGHE_MEDUSA][COLONNE_MEDUSA] = {{(char) 95,' ',(char) 95},{(char) 128,(char) 219,(char) 128},{(char) 219,(char) 219,(char) 219},{(char) 188,(char) 186,(char) 200}};
char matrice_schermo[RIGHE][COLONNE];


using namespace std;

void stampa_schermo();
void cls();
void stampa_medusa(int riga_iniziale, int colonna_iniziale);

int main()
{
    cls();
    stampa_medusa(1,10);
    stampa_schermo();
    system("pause");

    return 0;
}

void stampa_medusa(int riga_iniziale, int colonna_iniziale)
{
    for(int r=riga_iniziale, r_medusa=0; r<(riga_iniziale+RIGHE_MEDUSA); r++, r_medusa++)
        for(int c=colonna_iniziale, c_medusa=0; c<(colonna_iniziale+COLONNE_MEDUSA); c++, c_medusa++)
            matrice_schermo[r][c] = medusa[r_medusa][c_medusa];

}
void stampa_schermo()
{
    for(int r=0; r<RIGHE; r++)
    {
        for(int c=0; c<COLONNE; c++)
            cout<<matrice_schermo[r][c];
        cout<<endl;
    }
}

void cls()
{
    system("cls");
    for(int r=0; r<RIGHE; r++)
    {
        for(int c=0; c<COLONNE; c++)
            matrice_schermo[r][c]=' ';
    }
}


