// By Anshul saini

void selection_sort(int *arr, int len)
{

    for (int i = 0; i < 10; i++)
    {

        for (int j = i + 1; j < 10; j++)
        {

            if (arr[i] > arr[j])
            {

                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}
