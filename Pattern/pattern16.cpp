/*                   *
                 *   *
             *   *   *
         *   *   *   *
     *   *   *   *   *            */
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
      cout<<"* ";  
      
   }
   cout<<endl;
   
}
return 0;
}