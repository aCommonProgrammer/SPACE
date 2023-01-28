#include <iostream>

#define RIGHE 63
#define COLONNE 237
#define RIGHE_MEDUSA 4
#define COLONNE_MEDUSA 3
#define RIGHE_ASTRONAVE 3
#define COLONNE_ASTRONAVE 3

char astronave[RIGHE_ASTRONAVE][COLONNE_ASTRONAVE] = {'/', (char) 219,'\\',(char) 219,(char) 220,(char) 219,' ',(char) 176};
char medusa[RIGHE_MEDUSA][COLONNE_MEDUSA] = {(char) 95,' ',(char) 95,(char) 128,(char) 219,(char) 128,(char) 219,(char) 219,(char) 219,(char) 188,(char) 186,(char) 200};
char matrice_schermo[RIGHE][COLONNE];

using namespace std;

void stampa_schermo();
void cls();

int main()
{
    cls();
    /*stampa_schermo();
    system("pause");*/

    return 0;
}

void stampa_medusa(int riga_iniziale, int colonna_iniziale)
{
    for(int r=riga_iniziale, r_medusa=0; r<riga_iniziale+RIGHE_MEDUSA; r++, r_medusa++)
    {
        for(int c=colonna_iniziale, c_medusa; c<colonna_iniziale+COLONNE_MEDUSA; c++, c_medusa++)
            matrice_schermo[r][c] = medusa[r_medusa][c_medusa];
    }
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


