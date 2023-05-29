#include <iostream>
using namespace std;
void threeSum(int arr[], int size)
{
  
int target = 10;
  for (int i = 0; i < size-2; i++)
  {
for (int j = i+1 ; j < size-1; j++)
  {
for (int k = j+1; j < size; j++)
  {
if(arr[i]+arr[j]+arr[k]==target)
    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
    
}
    }

      
  }
}

int main()
{
  int myArray[6] = {3, 2, 5, 6, 3, 1 }; 
  threeSum(myArray, 6);
  return 0;
}