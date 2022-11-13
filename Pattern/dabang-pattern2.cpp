/*                  
                1 2 3 4 5 5 4 3 2 1
                1 2 3 4 * * 4 3 2 1
                1 2 3 * * * * 3 2 1
                1 2 * * * * * * 2 1
                1 * * * * * * * * 1                               
                                  */
               /*                  
                1 2 3 4 5                           5 4 3 2 1
                1 2 3 4     *  *                      4 3 2 1
                1 2 3     * *  * *                      3 2 1
                1 2     * * *  * * *                      2 1
                1     * * * *  * * * *                      1                               
                                  */
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
   //  1st Triangle
for (int i = 1; i <= n; i++)
{ 
   for (int j = 1; j <= n-i+1; j++)
   {
      cout<<j;  
       cout<<" ";
      
   }
   //  2nd Triangle 
   for (int m = i-1; m>=1 ; m--)       
   {
      cout<<"*";
      cout<<" ";   
      
   }
   // 3rd Triangle
    for (int m = i-1; m>=1 ; m--)       
   {
      cout<<"*";
      cout<<" ";   
     
   }
   // 4th Triangle
   for (int j=n-i+1; j>=1; j--)
   {
      cout<<j;  
       cout<<" ";
      
   }
   cout<<endl;
   
}
return 0;
}