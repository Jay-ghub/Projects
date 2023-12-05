/**********************************************************************\
* Kurzbeschreibung: Uebung: 13_1   Punkte: n
*
* Datum:       Autor:        Grund der Aenderung:
* 05.05.2022   Ndiaye.M          Neuerstellung
*
\**********************************************************************/

/*--- #includes ------------------------------------------------------*/
#include <stdio.h>

/*--- #defines -------------------------------------------------------*/


/*--- typedef-Datentypen ---------------------------------------------*/

/*--- Funktionsdefinitionen ------------------------------------------*/


int main( void )
{
    char auswahl;

    printf("Hauptmenue\n"
           "=========\n\n");

    printf("(A)endern\n");
    printf("(B)eenden\n");
    printf("(D)ruecken\n");
    printf("(E)ingeben\n");
    printf("(L)oeschen\n");
    printf("Was wuenschen Sie zu tun ?\n");
    scanf("%c", &auswahl);
    switch(auswahl)
    {
    case 'a':
    case 'A': printf("Sie haben (A)endern gewaehlt\n");
              break;
    xase 'b':
    case 'B': printf("Sie haben (B)eenden gewaehlt\n");
              break;
    case 'd':
    case 'D': printf("Sie haben (D)ruecken gewaehlt\n");
              break;
    case 'e':
    case 'E': printf("Sie haben (E)ingeben gewaehlt\n");
              break;
    case 'l':
    case 'L': printf("Sie haben (L)oeschen gewaehlt\n");
              break;
    default: printf("Ihre Wahl '%c' ist nicht erlaubt\n", auswahl);
             break;
    }

    return 0;
}