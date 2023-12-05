/**********************************************************************\
* Kurzbeschreibung: Uebung: 13_4   Punkte: n
*
* Datum:       Autor:        Grund der Aenderung:
* 05.05.2022   Ndiaye.M          Neuerstellung
*
\**********************************************************************/

/*--- #includes ------------------------------------------------------*/
#include <stdio.h>
#include <math.h>

/*--- #defines -------------------------------------------------------*/
#define PI           3.141592654
/*--- typedef-Datentypen ---------------------------------------------*/

int main(void)

{
    char auswahl = 0;
    double f, u, r = 0;

    printf("Flaesche, Umfang und Radius eines Kreises\n"
           "=========================================\n\n");

    printf("Du kannst waehlen, was du eingeben moechtest.\n"
           "Ich berechne Dir dann die 2 fehlenden Groessen.\n"
           "Flaeche eingeben:    f\n"
           "Umfang eingeben:     u\n"
           "Radius eingeben:     r\n\n"
           "Deine Wahl? \n");
    scanf("%c", &auswahl);

    switch(auswahl)
    {
    case 'f': printf("Flaesche? \n");
              scanf("%lf", &f);
              printf("Radius = %.2lf\n", r);
              scanf("%lf", &u);
              printf("Umfang = %.2lf\n", u);
              r = sqrt(f/PI);
              u = 2*r*PI;
    break;
    case 'u': printf("Umfang? \n");
              scanf("%lf", &u);
              printf("Umfang = %2.f\n", u);
              r = u/(2*PI);
              f = r*r*PI;
    break;
    case 'r': printf("Radius? \n");
              scanf("%lf", &r);
              printf("Radius = %2.f\n", r);
              u = 2*PI*r;
              f = PI*r*r;
    break;
    default: printf("'%c'ist kein erlaubte Wahl\n", auswahl);
    }

return 0;
}