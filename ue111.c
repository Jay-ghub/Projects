/**********************************************************************\
* Kurzbeschreibung: Uebung: 11_1   Punkte: n
*
* Datum:       Autor:        Grund der Aenderung:
* 03.05.2022   Ndiaye.M            Neuerstellung
*
\**********************************************************************/

/*--- #includes ------------------------------------------------------*/
#include <stdio.h>

/*--- #defines -------------------------------------------------------*/

/*--- typedef-Datentypen ---------------------------------------------*/

/*--- Funktionsdefinitionen ------------------------------------------*/

int main (void)

{
    int jahr;

    printf("Gib ein Jahr ein: ");
    scanf("%d", &jahr);

    printf("\n ---> ");
    if (jahr%400 == 0 && (jahr%100 == 0 || jahr%4 == 0))
    printf("Schaltjahr\n");

    else
    printf("Kein Schaltjahr\n");

    return 0;
}