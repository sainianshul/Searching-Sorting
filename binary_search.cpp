// By Anshul Saini

int binary_search(int arr[], int len, int key)
{

    int s = 0, e = len - 1;
    int mid;

    while (s <= e)
    {

        mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return -1;
}
