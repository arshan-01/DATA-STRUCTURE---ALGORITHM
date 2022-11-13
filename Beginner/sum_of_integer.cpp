#include <iostream>
using namespace std;
int main() {
 int sum = 0;
 int n;
 
  cout <<  " Enter a number :  " ;
 cin >> n;
     for (int i = 1; i <= n; i++)
     {
            sum = sum + i;
     }
  cout <<  " Sum of integer till "<<n<<" is "<< sum<<endl;
}