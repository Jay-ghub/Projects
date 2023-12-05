/**********************************************************************\
* Kurzbeschreibung: Uebung: 15_3   Punkte: n
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
    int anzahlBrueche = 0;
    printf("Wieviele Brueche sollen addiert bzw. subtrahiert werden: ");
    scanf("%i", &anzahlBrueche);

    if (anzahlBrueche <= 0)
    {
        printf("Ungueltige Eingabe!\n");
        return -1;
    }

    double summe = 0.0;
    int i = 0;
    int operation = -1;

    for (i = 0; i < anzahlBrueche; ++i)
    {
        int k_lauf = 2 * i + 1;

        summe += operation * (1 / (double)k_lauf);
    }

    double pi = summe * 4;

    printf("\tSumme bis zum %i.Glied: %f ===> PI=%f\n", anzahlBrueche, summe, pi);

    return 0;
}