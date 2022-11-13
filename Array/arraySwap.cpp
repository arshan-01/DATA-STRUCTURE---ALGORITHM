#include <iostream>
using namespace std;
void arraySwap(int arr[], int size)
{
  int start = 0;
  int end = size - 1;
  while (start <= end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}
void arrayPrint(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}
int main()
{
  int myArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  arraySwap(myArray, 10);
  arrayPrint(myArray, 10);
  return 0;
}