/*          A       A       A
            B       B       B
            C       C       C           */
#include <iostream>
using namespace std;
int main() {
    int n;
     char value = 'A';
    cout<<"Enter the number of rows: ";
    cin>>n;
for (int i = 1; i <= n; i++)
{
   
   for (int j = 1; j <= n; j++)
   {
     cout<<value<<"\t"; 
   }
   cout<<endl;
   value++;  
}
return 0;
}