/*                 *****
                    ****
                     ***
                      **
                       *           */
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
for (int i = 1; i <= n; i++)
{
    int space= n+i-5;
    for (int k= 1; k<=space ; k++)
    {
        cout<<" "; 
        
    }
    
   for (int j = 1; j <= n-i+1; j++)
   {
      cout<<"*";  
      
   }
   cout<<endl;
   
}
return 0;
}