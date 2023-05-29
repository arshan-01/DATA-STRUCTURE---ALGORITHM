#include <iostream>
using namespace std;
int sort01(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    while (low < high)
    {

        while (arr[low] == 0 && low < high)
        {
            low++;
        }
        while (arr[high] == 1 && low < high)
        {
            high--;
        }
        if (low < high)
        {
            swap(arr[high], arr[low]);
            high--;
            low++;
        }
    }
    cout << "sort order is : ";
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
}
int main()
{
    int myArray[7] = {0, 1, 0, 1, 1, 0, 1};
    sort01(myArray, 7);
    return 0;
}

// other method
// #include <iostream>
// using namespace std;
// int sort01(int arr[], int n)
// {
//     int low = 0;
//     int high = n - 1;
//     while (low <high)
//     {

//          if(arr[low] == 0)
//         {
//             low++;
//         }
//         else if ( arr[high]==1)
//         {
//             high--;
//         }
//         else
//         {
//             swap(arr[high],arr[low]);
//            high--;
//            low++;
//         }

//     }
//     cout << "sort order is : ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << " " << arr[i];
//     }
// }
// int main()
// {
//     int myArray[7] = {0, 1, 0, 1, 1,0, 1};
//     sort01(myArray, 7);
//     return 0;
// }

// other method

// #include <iostream>
// using namespace std;
// int sort01(int arr[], int n)
// {
//     int low = 0;
//     int high = n - 1;
//     while (low <high)
//     {

//          if(arr[low] == 0)
//         {
//             low++;
//         }
//         else
//         {
//            swap(arr[high],arr[low]);
//            high--;
//         }

//     }
//     cout << "sort order is : ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << " " << arr[i];
//     }
// }
// int main()
// {
//     int myArray[18] = {0, 1, 0, 1, 1,0, 1,0,1,0,0,0,0,1,1,1,0,0};
//     sort01(myArray, 18);
//     return 0;
// }