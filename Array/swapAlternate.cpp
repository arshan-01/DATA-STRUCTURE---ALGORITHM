#include <iostream>
using namespace std;

void arrayAlternate(int arr[],int size){
    
    for (int i = 0; i < size; i+=2)
{
    if(i+1<size){
       swap (arr[i],arr[i+1]);
    }
}
}
void arrayPrint(int arr[],int size){
 for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

}
int main() {
int myArray[10]={1,2,3,4,5,6,7,8,9,10};
arrayAlternate(myArray,10);
arrayPrint(myArray,10);
return 0;
}