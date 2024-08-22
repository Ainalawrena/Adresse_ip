
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ip.h"

int main()
{
    char adresse[100];
    int chiffre1=0,chiffre2=0,chiffre3=0,chiffre4=0;
    getIP(adresse);
    traitement(adresse);
    return 0;
}