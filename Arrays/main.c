#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Arreglos unidimensionales \n");

    int integerList[3];
    integerList[0] = 4;
    integerList[1] = 5;
    integerList[2] = 6;

    float floatList[]={23.4, 34.5, 45.6, 21.8, 56.7};

    char charList[8];

    charList[0]='G';
    charList[1]='i';
    charList[2]='o';
    charList[3]='v';
    charList[4]='a';
    charList[5]='n';
    charList[6]='n';
    charList[7]='i';

    printf("\n Primer entero: \t\t %i",integerList[0]);

    printf("\n Tercer flotante: \t\t %f",floatList[2]);

    printf("\n Lista de caracteres: \t\t %c%c%c%c%c%c%c%c. \n ", charList[0], charList[1], charList[2], charList[3], charList[4], charList[5], charList[6], charList[7], charList[8]);

    return 0;
}
