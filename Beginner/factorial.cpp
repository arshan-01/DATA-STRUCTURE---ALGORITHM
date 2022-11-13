#include <iostream>
using namespace std;
int main() {
 int f = 1;
 int n;
 
  cout <<  " Enter a number :  " ;
 cin >> n;
     for (int j = 1; j <= n; j++)
     {
      f=f*j;  
     }
  cout <<  " Factorial! " << f<<endl;
}