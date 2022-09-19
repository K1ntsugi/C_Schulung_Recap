#include <stdio.h>

static void merge(int *arr1, const int *arr2, int *result);
static int compareTo(int a, int b);
static void printArray(const int *res);

int main(void)
{
    int array1[9] = {2, 3, 4, 6, 8, 10, 11, 12, 0};
    int array2[9] = {3, 4, 5, 7, 8, 9, 11, 13, 0};
    int result[17];

    merge(array1, array2, result);

    printArray(result);
}

static void merge(int *arr1, const int *arr2, int *result)
{
    int i = 0;
    int decide, j, k;

    j = 0, k = 0;
    for (i = 0; i < 13; i++)
    {
        decide = compareTo(arr1[j], arr2[k]);
        if (decide <= 0)
        {
            result[i] = arr1[j++];
            if (decide == 0)
                k++;
        }
        else
        {
            result[i] = arr2[k++];
        }
    }
}

static int compareTo(int a, int b)
{
    if (a == b)
    {
        return 0;
    }

    if (a < b)
    {
        return -1;
    }

    if (a > b)
    {
        return 1;
    }
}

static void printArray(const int *res)
{
    while (*res)
    {
        printf("%i ", *res);
        res++;
    }
}
