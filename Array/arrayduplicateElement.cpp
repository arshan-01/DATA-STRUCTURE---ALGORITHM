#include <iostream>
using namespace std;
int Duplicate(int arr[], int n)
{
    int i, j;
    bool chk = false;
    int ans;
    for (i = 0; i < n; i++)
    {
        chk = false;
        for (j = 0; j < n; j++)
        {
            if (arr[i] == arr[j] && i != j)
                chk = true;
            break;
        }
        if (chk)
        {
            ans = arr[i];
        }
    }
    cout << ans << " ";
}
int main()
{
    int n, i;
    cout << "\nEnter the number of elements : ";
    cin >> n;
    int arr[n];
    cout << "\nInput the array elements : ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Duplicate element : "
         << " ";
    Duplicate(arr, n);

    return 0;
}
