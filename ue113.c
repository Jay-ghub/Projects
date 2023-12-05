/**********************************************************************\
* Kurzbeschreibung: Uebung: 11_3   Punkte: n
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
int main(void)

{
    int x, y;

    printf("Zahl x durch Zahl y teilbar ?\n"
           "=============================\n\n"

            "Dieses Programm sagt ihnen, ob ein Zahl x durch ein Zahl y\n"
            "teilbar ist. Dazu muessen nur die beiden ganzen Zahlen x und y eingeben.\n");

    printf("x? ");
    scanf("%d", &x);

    printf("y? ");
    scanf("%d", &y);

    if (x%y == 0)
    printf("    %d ist durch %d teilbar\n", x,y);

    else
    printf("    %d ist durch %d nicht teilbar\n", x,y);

    return 0;
}