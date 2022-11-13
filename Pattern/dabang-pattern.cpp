/*                     1
                     1 2 1
                   1 2 3 2 1
                 1 2 3 4 3 2 1
                                  */
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
for (int i = 1; i <= n; i++)
{
    int space= n-i;
    for (int k= 1; k<=space ; k++)
    {
        cout<<"  "; 
    }
    
   for (int j = 1; j <= i; j++)
   {
      cout<<j;  
       cout<<" ";
      
   }
     
   for (int m = i-1; m>=1 ; m--)       
   {
      cout<<m;
      cout<<" ";   
      
   }
   cout<<endl;
   
}
return 0;
}