#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
  int start = 0;
  int end = size - 1;
  // int mid = (start + end) / 2;
  //Better way if value of start or end or both is INT_MAX
   int mid = start + (end - start) / 2;
  while (start <= end) {
    if (arr[mid] == key) {
      return mid;
    }
    if (arr[mid] > key) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
    mid = start + (end - start) / 2;
  }
  return -1;
}

int main() {

  int arr[5] = {1, 2, 3, 11, 23};
  int res = binarySearch(arr, 5, 1);
  cout << 1 << " is at index " << res;
}