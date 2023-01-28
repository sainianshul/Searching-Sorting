// By Anshul Saini

int linear_search(int *arr, int len, int num)
{

    for (int i = 0; i < len; i++)
    {

        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}
