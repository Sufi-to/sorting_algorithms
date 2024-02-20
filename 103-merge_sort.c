#include "sort.h"

void marrays(int *array, size_t start, size_t mid, size_t end)
{
    size_t i = 0;
    size_t tmpmid = mid;
    size_t tmpstart = start;
    size_t tmpstart2 = start;
    size_t res[end - start + 1];
    while (start < tmpmid && mid <= end && i <= end - tmpstart)
    {
        if (array[start] > array[mid])
        {
            res[i] = array[mid];
            mid++;
        }
        else if (array[start] <= array[mid])
        {
            res[i] = array[start];
            start++;
        }
        i++;
    }
    while (start < tmpmid) {
        res[i] = array[start];
        start++;
        i++;
    }
    while (mid <= end) {
        res[i] = array[mid];
        mid++;
        i++;
    }
    i = 0;
    while (i < end - tmpstart2 + 1) {
        array[tmpstart] = res[i];
        i++;
        tmpstart++;
    }
}

void msort(int *array, size_t len, size_t start, size_t end)
{
    size_t mid;
    if (len >= 2)
    {
        mid = len / 2;
        msort(array, mid, start, start + mid - 1);
        msort(array, len - mid, start + mid, end);
        marrays(array, start, start + mid, end);
    }
}

void merge_sort(int *array, size_t size)
{
    msort(array, size, 0, size - 1);
}

