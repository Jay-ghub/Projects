#include <stdio.h>
/**********************************************************************\
* Kurzbeschreibung: Uebung: 6_1_1   Punkte: n
*
* Datum:       Autor:        Grund der Aenderung:
* 03.05.2022   Ndiaye.M            Neuerstellung
*
\**********************************************************************/

/*--- #includes ------------------------------------------------------*/
#include <stdio.h>
#include <math.h>

/*--- #defines -------------------------------------------------------*/

#define PI                    3.141592654
#define PI_OBERFLAECHE        4 * PI
/*--- typedef-Datentypen ---------------------------------------------*/

/*--- Funktionsdefinitionen ------------------------------------------*/

int main()
{
    printf("Aufgabe 6_1_1\n\n");

    float radius,umfang, volumen, oberflaeche;

    printf("Radius der Kugel: \n");
    scanf("%f", &radius);

    umfang = 2 * radius * PI;
    volumen = 4 * PI * pow(radius, 3.0) / 3;
    oberflaeche = PI_OBERFLAECHE * pow(radius, 2.0);

    printf("Umfang=%f\n", umfang);
    printf("Volumen=%f\n", volumen);
    printf("Oberflaeche=%f\n\n", oberflaeche);

    return 0;
}
