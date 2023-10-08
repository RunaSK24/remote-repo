void mySort(int *arr, int low, int high)
{
    if (high <= low)
        return;
    int i = low, j = high, key = arr[low];
    while (true)
    {
        while (arr[i] <= key)
        {
            i++;
            if (i == high)
            {
                break;
            }
        }
        while (arr[j] >= key)
        {
            j--;
            if (j == low)
            {
                break;
            }
        }
        if (i >= j)
            break;

        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    arr[low] = arr[j];
    arr[j] = key;
    mySort(arr, low, j - 1);
    mySort(arr, j + 1, high);
}