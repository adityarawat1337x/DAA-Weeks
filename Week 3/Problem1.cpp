#include <bits/stdc++.h>

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int j,swap=0, comp=0;
    for (int i = 0;i<n;i++)
        cin >>  arr[i];

    for (int i = 1; i < n;i++){
        j = i - 1;
        int key = arr[i];
        while (j >= 0 && key<arr[j])
        {
            comp++;
            arr[j + 1] = arr[j];
            swap++;
            j--;
        }
        arr[j + 1] = key;
        swap++;
    }

    for (int i = 0;i<n;i++)
        cout << arr[i]<< " ";

    cout << endl << comp << " " << swap;
    return 0;
}
