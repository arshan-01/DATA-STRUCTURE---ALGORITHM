#include <iostream>
using namespace std;

void Max(int arr[], int n)
{
    int max = arr[0];
    int Smax = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max && arr[i] > Smax)
        {
            Smax = max;
            max = arr[i];
        }
        if (arr[i] > Smax && arr[i] < max)
        {
            Smax = arr[i];
        }

    }
    cout << "Max is: " << max << endl;
    cout << "2nd Max is: " << Smax << endl;
}
int main()
{
    int arr[10] = {1, 2, 3, 5, 5, 10, 7, 8, 11};

    Max(arr, 10);

    return 0;
}