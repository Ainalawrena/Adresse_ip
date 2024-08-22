#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ip.h"

void getIP(char adresse[100])
{
    printf("veullez entrer l'adresse ip : ");
    scanf("%s",adresse);
}
void traitement(char adresse[100])
{
    int chiffre1,chiffre2,chiffre3,chiffre4;
    char* nombre= strtok(adresse, ".");

    if (nombre!= NULL)
     {
        chiffre1 = atoi(nombre);
    }

    nombre= strtok(NULL, ".");
    if (nombre != NULL) 
    {
        chiffre2 = atoi(nombre);
    }

    nombre = strtok(NULL, ".");
    if (nombre != NULL)
    {
        chiffre3 = atoi(nombre);
    }

    nombre = strtok(NULL, ".");
    if (nombre != NULL)
    {
        chiffre4 = atoi(nombre);
    }
    if (chiffre1 > 255 || chiffre2 > 255 || chiffre3 > 255 || chiffre4 > 255 || !(chiffre1 >= 0 && chiffre2 >= 0 && chiffre3 >= 0 && chiffre4 >= 0))
    {
        printf("Ce n'est pas un adresse IP !\n");
        exit(1);
    }

    if (chiffre1 >= 0 && chiffre2 >= 0 && chiffre3 >= 0 && chiffre4 >= 0)
    {
         printf("C'est un adresse IP   ");
            if (chiffre1 <= 127 && chiffre1 > 0)
                {
                    printf("et de classe A\n");
                }

            if (chiffre1 >127 && chiffre1 <= 191)
                {
                    printf("et de classe B\n");
                }
            if (chiffre1 >191 && chiffre1 <= 223)
                {
                    printf("et de classe C\n");
                }
            if (chiffre1 >223 && chiffre1 <= 239)
                {
                    printf("et de classe D\n");
                }
            if (chiffre1 >239)
                {
                    printf("et de classe E\n");
                }
        }
}

