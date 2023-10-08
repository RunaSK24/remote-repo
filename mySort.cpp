void mySort(int *arr, int low, int high)
{
    if (high <= low) // 退出循环条件（所有元素均在正确的位置）
        return;
    int i = low, j = high, key = arr[low];
    while (true)
    {
        // 从左到右找到第一个大于key的数
        while (arr[i] <= key)
        {
            i++;
            if (i == high)
            {
                break;
            }
        }
        // 从右到左找到第一个小于key的数
        while (arr[j] >= key)
        {
            j--;
            if (j == low)
            {
                break;
            }
        }
        if (i >= j)//左右区间分割完成
        {
            break;
        }
        else //将不符合分割的第i、j个元素互换
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    arr[low] = arr[j];
    arr[j] = key;
    mySort(arr, low, j - 1);//对左区间递归排序
    mySort(arr, j + 1, high);//对右区间递归排序
}