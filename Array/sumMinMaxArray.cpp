#include <iostream>
using namespace std;
void minmax(int A[], int N)
{
   int ans  = 0 ;
    int maxRes = A[0];
    int minRes = A[0];
  for (int i = 0; i< N-1; i++)
  {
   
       maxRes = max(maxRes ,A[i]);
        minRes = min(minRes ,A[i]); 
    }
    
   ans = minRes + maxRes;
  cout<< ans << " is sum" <<endl;
  cout<<maxRes<<" is max "<<endl;
  cout<<minRes<<" is min "<<endl;
}

int main()
{
  int myArray[10] = {-2, 1, -4, 5, 3};
  minmax(myArray, 10);
  return 0;
}