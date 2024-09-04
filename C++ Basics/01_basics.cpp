#include <iostream> //This is headerfile.
// the entire thing is called as preprocessor diractive..
// here # says to include the iostream file to compiler before compilation of programms.
using namespace std;
int main()
{
  // Implicit typecasting
  //  this typecast is done by compiler itself .. and mainly convert smaller type to bigger type.
  char ch = 'a';
  int a = ch;
  cout << a << endl;

  // EXPLICIT typecasting
  // convert bigger  type into smaller type;
  char c = 'b';
  int val = (int)c;
  cout << val << endl;

  cout << 64 / (int)2.15 << endl;

  return 0;
}
// int/int = int
// int/float = float
// float/float = float
