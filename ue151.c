/**********************************************************************\
* Kurzbeschreibung: Uebung: 15_1   Punkte: n
*
* Datum:       Autor:        Grund der Aenderung:
* 05.05.2022   Ndiaye.M          Neuerstellung
*
\**********************************************************************/

/*--- #includes ------------------------------------------------------*/
#include <stdio.h>
#include <math.h>

/*--- #defines -------------------------------------------------------*/


/*--- typedef-Datentypen ---------------------------------------------*/

/*--- Funktionsdefinitionen ------------------------------------------*/

int main(void)

{
    int n_eingabe = 0;
    printf("Bis zu welchem n soll diese Reihe berechnet werden: ");
    scanf("%i", &n_eingabe);

    if(n_eingabe <= 0)
    {
        printf("Ungueltige Eingabe!\n");
        return -1;
    }

    double summe = 1.0;
    int i = 0;
    for(i = 2; i <= n_eingabe; ++i)
    {
        summe += 1.0 / (float)i;
    }

    printf("\tSumme bis 1/%i: %.7f\n", n_eingabe, summe);

    return 0;
}