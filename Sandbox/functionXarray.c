#include <stdio.h>

static void foo(const int *arr)
{
    int *ptr;
    ptr = arr;
    while(*ptr)
    {
        printf("%i ", *ptr);
        ptr++;

    }
}

int main(void)
{
    int arr[6] = {1,2,3,4,5,0};
    foo(arr);
}
