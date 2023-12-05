/**********************************************************************\
* Kurzbeschreibung: Uebung: 18_2   Punkte: n
*
* Datum:       Autor:        Grund der Aenderung:
* 05.05.2022   Ndiaye.M          Neuerstellung
*
\**********************************************************************/

/*--- #includes ------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*--- #defines -------------------------------------------------------*/

/*--- typedef-Datentypen ---------------------------------------------*/

int main(void)
{
    printf("Primzahlen\n==========\nDieses Programm gibt Ihnen alle Primzahlen zwischen\nm und n aus. m und n sind dabei einzugeben.\n");

    int n = 0, m = 0, i, j, flag = 0, count = 0;

    printf("m: ");
    int status = scanf("%i", &m);
    while (status <= 0 || m <= 0)
    {
        printf("nochmal: ");
        while (getchar() != '\n')
        status = scanf("%i", &m);
    }

    printf("n: ");
    status = scanf("%i", &n);
    while (status <= 0 || n <= m)
    {
        printf("nochmal: ");
        while (getchar() != '\n')
        status = scanf("%i", &n);
    }

    for (i = m; i <= n; i++)
   {
        flag = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if ((i % j) == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0 && i >= 2)
        {
            printf("%d, ", i);
            count++;
        }
   }
return 0;
   }