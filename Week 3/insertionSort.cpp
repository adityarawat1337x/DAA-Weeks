#include <bits/stdc++.h>

using namespace std;

void insertionSort(int arr[], int l)
{
    int noc = 0, shift = 0;
    for (int i = 1; i < l; ++i)
    {
        int temp = arr[i], j = i - 1;
        while (++noc && j >= 0 && arr[j] > temp)
        {
            ++shift;
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = temp;
    }
    for (int i = 0; i < l; ++i)
        cout << arr[i] << " ";
    cout << endl;
    cout << "comparisons = " << noc << endl;
    cout << "shifts = " << shift << endl;
}

int main()
{

    int no;
    cin >> no;
    for (int f = 0; f < no; f++)
    {
        int l;
        cin >> l;
        int arr[l];
        for (int i = 0; i < l; ++i)
            cin >> arr[i];
        insertionSort(arr, l);
    }

    return 0;
}
