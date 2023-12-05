/**********************************************************************\
* Kurzbeschreibung: Uebung: 25_2   Punkte: n
*
* Datum:       Autor:        Grund der Aenderung:
* 05.05.2022   Ndiaye.M          Neuerstellung
*
\**********************************************************************/

/*--- #includes ------------------------------------------------------*/
#include <stdio.h>

/*--- #defines -------------------------------------------------------*/
#define N 10

/*--- typedef-Datentypen ---------------------------------------------*/

    int main(void)
{
    float a[N][N], b[N][N],c[N][N], sum;
    int i,j,k,m,n,p,q;

    printf("Zeilen, Spalten der 1. Matrix: \n");
    int status = scanf("%d,%d" ,&m,&n);
    while (status <= 0)
    {
        printf("Ungueltig, nochmal: ");
        while (getchar() != '\n')
        status = scanf("%d,%d" ,&m,&n);
    }
    printf("Eingabe der 1. Matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%f", &a[i][j]);
        }
    }
    printf("Zeilen, Spalten der 2. Matrix: \n");
    status = scanf("%d,%d" ,&p,&q);
    while (status <= 0)
    {
        printf("Ungueltig, nochmal: ");
        while (getchar() != '\n')
        status = scanf("%d,%d" ,&p,&q);
    }
    printf("\nEingabe der 2. Matrix:\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%f", &b[i][j]);
        }
    }
    printf("\n1. Matrix\n");

    for (i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
    {

        printf("%8.2f\t", a[i][j]);
    }
        printf("\n");
    }
    printf("\n2. Matrix:\n");

    for (i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
    {

        printf("%8.2f\t", b[i][j]);
    }
    printf("\n");
    }

    if(n!=p)
    {
        printf("Kann man nicht multiplizieren");
    }
    else
    {
        for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {   sum=0;
             for(k=0;k<n;k++)
             {

            sum=sum+(a[i][k]*b[k][j]);
             }
            c[i][j]=sum;

        }
    }
     printf("Ergebnismatrix:\n");
     for(i=0;i<m;i++)
     {
        for(j=0;j<q;j++)
        {
            printf("%8.2f\t", c[i][j]);
        }
        printf("\n");
     }
    }

}

