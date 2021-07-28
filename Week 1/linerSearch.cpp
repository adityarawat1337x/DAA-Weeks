#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n;i++)
            cin >> arr[i];
        int i,key,comp = 1;
        cin >> key;
        for (i = 0; i < n; i++,comp++)
            if(arr[i]==key)
                break;

        if(i==n){
            cout << "NOT PRESENT";
        }
        else
            cout << "PRESENT " << comp;
    }
    return 0;
}
