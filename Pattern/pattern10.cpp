/*          A       B       C
            A       B       C
            A       B       C           */
#include <iostream>
using namespace std;
int main() {
    int n;
     
    cout<<"Enter the number of rows: ";
    cin>>n;
for (int i = 1; i <= n; i++)
{
    char value = 'A';
   for (int j = 1; j <= n; j++)
   {
     cout<<value<<"\t"; 
     value++; 
   }
   cout<<endl;
    
}
return 0;
}