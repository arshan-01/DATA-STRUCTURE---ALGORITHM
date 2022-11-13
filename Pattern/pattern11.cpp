/*          A       B       C
            B       C       D
            C       D       E           */
#include <iostream>
using namespace std;
int main() {
    int n;
     
    cout<<"Enter the number of rows: ";
    cin>>n;
for (int i = 1; i <= n; i++)
{
    
   for (int j = 1; j <= n; j++)
   {
     char value = 'A'+j+i-2;
     cout<<value<<"\t"; 
     value++; 
   }
   cout<<endl;
   
    
}
return 0;
}