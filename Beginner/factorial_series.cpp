#include <iostream>
using namespace std;
int main() {
float sum = 0;

int n;
  cout <<  " Factorial_series  1/1! + 1/2! + 1/3! + 1/4! : " << endl;
  for (int i = 1; i < 5; i++)
  {
    float f = 1;
    for (int j = 1; j <= i; j++)
     {
      f=f*j;  
     }
      sum = sum + 1.0/f;
    
  }
   cout <<  " Factorial_series  1/1! + 1/2! + 1/3! + 1/4! :  "<<sum << endl;       //Expected Answer 1.70833
}