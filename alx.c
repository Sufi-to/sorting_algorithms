



void marrays(int *array, int start, int mid, int end)
{
    int i = 0;
    int tmpmid = mid;
    int tmpstart = start;
    int tmpstart2 = start;
    int res[end - start + 1];
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

void msort(int *array, int len, int start, int end)
{
    int mid;
    if (len >= 2)
    {
        mid = len / 2;
        msort(array, mid, start, start + mid - 1);
        msort(array, len - mid, start + mid, end);
        marrays(array, start, start + mid, end);
    }
}

void mergesort(int *array, int len)
{
    msort(array, len, 0, len - 1);
}



