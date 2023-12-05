/**********************************************************************\
* Kurzbeschreibung: Uebung: 16_6   Punkte: n
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

int main(void)
{
    int n = 0, quersum = 0, m;
    printf("Gib die Zahl ein: ");
    scanf("%d", &n);

    // get the remainder, sum it, divide the result by 10,repeat till 0
    while (n > 0)
    {
        m = n % 10;
        quersum = quersum + m;
        n = n / 10;
    }

    printf("Die Quersum dieses Zahl ist %d\n", quersum);
    return 0;
}