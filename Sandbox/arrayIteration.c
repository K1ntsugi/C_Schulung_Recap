#include <stdio.h>

int main(void)
{
    int arr1[11] = {1,2,3,4,5,6,7,8,9,10,0};
    int arr2[11] = {10,-30,29,-28,27,-26,25,-24,23,-22,21};

    int *ptr;
    ptr = arr1;
    while(*ptr) //solange der Pointer-Wert > 0
    {
        printf("%i ", *ptr);
        ptr++;
    }

    //**********************************************
    printf("\n");
    //**********************************************

    int idx = 0;
    ptr = arr2;
    int len = *ptr;
    ptr++;
    while(idx < len)
    {
       printf("%i ", *ptr);
       ptr++;
       idx++;
    }

    //**********************************************
    printf("\n");
    //**********************************************

    for(ptr = &arr1[0]; *ptr > 0; ptr++)
    {
        printf("%i ", *ptr);
    }

    //**********************************************
    printf("\n");
    //**********************************************

    ptr = &arr2[1];
    for(idx = 0;idx < arr2[0]; idx++)
    {
        printf("%i ", *ptr);
        ptr++;
    }

}
