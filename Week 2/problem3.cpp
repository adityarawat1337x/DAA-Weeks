#include <bits/stdc++.h>

using namespace std;

int find_count(int a[], int n, int key)
{
    int c = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (abs(a[i] - a[j]) == key)
                ++c;
        }
    }
    return c;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    for (int z = 0; z < n; ++z)
    {
        int l;
        cin >> l;
        int a[l];
        for (int i = 0; i < l; ++i)
            cin >> a[i];
        int key;
        cin >> key;
        cout << find_count(a, l, key) << endl;
    }
    return 0;
}