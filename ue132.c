/**********************************************************************\
* Kurzbeschreibung: Uebung: 13_2   Punkte: n
*
* Datum:       Autor:        Grund der Aenderung:
* 05.05.2022   Ndiaye.M          Neuerstellung
*
\**********************************************************************/

/*--- #includes ------------------------------------------------------*/
#include <stdio.h>
#include <math.h>

/*--- #defines -------------------------------------------------------*/
#define PI          3.141592654

/*--- typedef-Datentypen ---------------------------------------------*/

/*--- Funktionsdefinitionen ------------------------------------------*/

int main(void)

{
    float flaeche = 0.0,a=0,b=0;
    char auswahl;

    printf("\nQuadrat: q\nRechteck: r\n\nKreis: k\n\nEllipse: e\n");
    printf("\nDeine Wahl? ");
    scanf("%c", &auswahl);

    switch(auswahl)
    {
        case 'Q':
        case 'q': printf("\nSeitenlänge: \n");
                  scanf("%f", &a);
                  flaeche = a*a;
        break;
        case 'R':
        case 'r': printf("\nLaenge der 1. Rechteckseite: \n");
                  scanf("%f", &a);
                  printf("Laenge der 2. Rechteckseite: \n");
                  scanf("%f", &b);
                  flaeche = a*b;
        break;
        case 'K':
        case 'k': printf("\nRadius der Kreis: \n");
                  scanf("%f", &a);
                  flaeche = a*a*PI;
        break;
        case 'E':
        case 'e': printf("\nRadius der x-Achse: \n");
                  scanf("%f", &a);
                  printf("Radius der y-Achse: \n");
                  scanf("%f", &b);
                  flaeche = a*b*PI;
        break;
        default: printf("'%c' ist keine erlaubte Wahl\n", auswahl);
                 break;
    }

    printf("\nFlaeche = %.2f\n", flaeche);

    return 0;
}