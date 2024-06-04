// By Anshul Saini

// bubble sort
void bubble_sort(int *arr, int len)
{

    for (int i = 0; i < 10; i++)
    {

        for (int j = 0; j < 10 - i; j++)
        {

            if (arr[i] < arr[j])
            {

                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}
