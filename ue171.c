/**********************************************************************\
* Kurzbeschreibung: Uebung: 17_1   Punkte: n
*
* Datum:       Autor:        Grund der Aenderung:
* 05.05.2022   Ndiaye.M          Neuerstellung
*
\**********************************************************************/

/*--- #includes ------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*--- #defines -------------------------------------------------------*/

/*--- typedef-Datentypen ---------------------------------------------*/

int main(void)

{
    printf("Ich denke mich eine Zahl aus dem Intervall [1,x].\n"
           "Du musst dann versuchen, diese Zahl zu erraten.\n"
           "\n\nZunächst musst du einmal festlegen,wie groß die zu\n"
           "ratende Zahl maximal sein darf: \n");

    int limit = 0;
    int status = scanf("%i", &limit);

    while (status <= 0 || limit <= 1)
    {
        printf("Ungueltig, nochmal: ");
        while (getchar() != '\n')
            ;
        status = scanf("%i", &limit);
    }

    // makes use of the computer's internal clock to control the choice of the seed.
    srand(time(0));
    int zahl = rand() % limit + 1;

    printf("Hm..... OK, ich habe eine Zahl\n\n");

    int anzahlVersuche = 0;
    int versuch = 0;

    while (versuch != zahl || status <= 0)
    {
        printf("Dein %i.Versuch: ", anzahlVersuche + 1);
        while (getchar() != '\n')
            ;
        status = scanf("%i", &versuch);

        if (status >= 1)
        {
            ++anzahlVersuche;

            if (versuch < zahl)
            {
                printf(".....zu niedrig\n");
            }
            else if (versuch > zahl)
            {
                printf(".....zu hoch\n");
            }
            else
            {
                printf(".....richtig\n");
            }
        }
        else
        {
            printf(".....ungueltige eingabe\n");
        }
    }

    printf("Du hast %i Versuche zum Erraten der Zahl benoetigt.\n", anzahlVersuche);

    return 0;
}