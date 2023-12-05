/**********************************************************************\
* Kurzbeschreibung: Uebung: 16_1   Punkte: n
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
    int fritz = 0, hanz = 0, runde = 0, aepfel;

    printf("Wieviele Aepfel haben Hanz und Fritz gekauft: ");
    scanf("%d", &aepfel);

    while (aepfel % 8 != 0)
    {
        printf("\n\nSorry, aber die Zahl der Aepfel muss durch 8 teilbar sein\n");
        printf("Gib ein neue Zahl ein: ");
        scanf("%d", &aepfel);
    }
    printf("\nRunde | Fritz | Hanz | Rest |\n");
    printf("------+-------+------+------|\n");

    while (aepfel > 0)
    {
        fritz += 5;
        hanz += 3;
        aepfel -= 8;
        printf("%5i | %5i | %5i | %5i|\n", ++runde, fritz, hanz, aepfel);
    }
    return 0;
}