// // Decimal to binary

#include <iostream>
#include <math.h>
using namespace std;

int convert_dec(int num)
{
  int ans = 0;
  int bit;
  int i = 0;
  while (num != 0)
  {
    bit = num & 1; // It will give bit with AND operation with last bit of binary conversion
    ans = (bit * pow(10, i)) + ans;
    num = num >> 1;
    i++;
  }
  return ans;
}

int reverse_bit(int n)
{
   uint32_t ans = 0;
   uint32_t count = 32;
    while(n!=0){
          
            ans += (n&1)<<count;
            count--;
            n>>=1;
        }
        return ans;
}

int main()
{
  int num;
  cout << "Enter a decimal number to convert to binary : ";
  cin >> num;
  int bit = convert_dec(num);
  cout << num << " in binary = " << bit << endl;
  int reversebit = reverse_bit(bit);
  cout << bit << " in reverse = " << reversebit << endl;
}



// Program to Convert Binary Number to Decimal
// #include <iostream>
// #include <math.h>

// using namespace std;

// int main()
// {
//   int n,ans = 0, i = 0, rem;
//   cout << "Enter a binary number: ";
//   cin >> n;
//   int orignal = n;
//   while (n != 0)
//   {
//     rem = n % 10;
//     n = n / 10;
//     ans = rem * pow(2, i) + ans ;
//     ++i;
//   }
//   cout << orignal << " in binary = " << ans << " in decimal";
// }
