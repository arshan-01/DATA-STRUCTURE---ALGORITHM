/*          A
            B       C
            D       E       F           */
#include <iostream>
using namespace std;
int main() {
    int n;
     
    cout<<"Enter the number of rows: ";
    cin>>n;
     char value = 'A';
for (int i = 1; i <= n; i++)
{
   for (int j = 1; j <= i; j++)
   {
     cout<<value<<"\t"; 
      value++; 
   }
   cout<<endl;
  
}
return 0;
}