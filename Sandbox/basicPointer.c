#include <stdio.h>

int main(void)
{
    //Variabel initialisiern
    int x = 0;
    printf("%d %s", x , "\n");
    //Adresse auslesen
    int *pointer;
    pointer = &x;
    printf("%i %s", pointer, "\n");
    //Werte mit Pointern manipulieren
    *pointer = 1;
    printf("%d %s", x, "\n");

}
