#include <stdio.h>
#include "faktor.h"
/**********************************************************************\
* Kurzbeschreibung: Uebung: 7_1_1   Punkte: n
*
* Datum:       Autor:        Grund der Aenderung:
* 03.05.2022   Ndiaye.M            Neuerstellung
*
\**********************************************************************/

/*--- #includes ------------------------------------------------------*/
#include <stdio.h>
#include "faktor.h"

/*--- #defines -------------------------------------------------------*/

#define MS_NACH_KMH           3.6
#define MS_NACH_KMTAG         86.4
#define MS_NACH_MTAG          864e+2
/*--- typedef-Datentypen ---------------------------------------------*/

/*--- Funktionsdefinitionen ------------------------------------------*/

int main(void)
{
    printf("Aufgabe 7.1.1\n\n");

    float meter, sek, v_ms, v_kmh, v_kmtag, v_mtag;

    printf("Gib Strecke ein(in meter): \n");
    scanf("%f", &meter);

    printf("Gib Zeit ein, die dafuer benotigt wird: \n");
    scanf("%f", &sek);

    v_ms = meter/sek;
    v_kmh =   v_ms * MS_NACH_KMH;
    v_kmtag = v_ms * MS_NACH_KMTAG;
    v_mtag =  v_ms * MS_NACH_MTAG;

    printf("\nDies entspricht folgender Geschwindigkeit: \n");
    printf("%f m/sec  =\n",    v_ms);
    printf("%f km/h   =\n",    v_kmh);
    printf("%f km/tag =\n",    v_kmtag);
    printf("%f m/tag   \n",    v_mtag);
    return 0 ;

    }
