#include <iostream>
using namespace std;

int main()
{
  string str = "I am a student ";
  string tempstring;
  string maxword;
  int largest = 0;

  int len = str.size();

  for (int i = 0; i <= len; i++)
  {

    if (str[i] == ' ')
    {
      tempstring = "";
    }
    else
    {
      tempstring += str[i];
    }
    if (largest < tempstring.length())
    {
      largest = tempstring.length();
      maxword = tempstring;
    }
  }
  cout << maxword;
}