/*           1
             2   3
             4   5   6
             7   8   9   10            */
#include <iostream>
using namespace std;
int main() {
    int n;
    int count=1;
    cout<<"Enter the number of rows: ";
    cin>>n;
for (int i = 1; i <= n; i++)
{

   for (int j = 1; j <= i; j++)
   {
      cout<<count<<"\t";  
      count ++;
   }
   cout<<endl;
   
}
return 0;
}