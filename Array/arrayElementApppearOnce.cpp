#include <iostream>
using namespace std;
int uniqueElement(int arr[], int n)
{
    int ans = 0;
    
    for (int i = 0; i < n; i++)    {
        ans = ans^arr[i];
}
    return ans;
}
int main()
{

    int arr[7]= {1, 1, 3, 4, 2, 3, 4 };
    cout << "\nFind one unique number : ";
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i]<<" ";
    }
    int unique = uniqueElement(arr, 7);
    cout << "\n" <<unique << " is unique element";

    return 0;
}
