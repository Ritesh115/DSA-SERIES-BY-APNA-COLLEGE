/*Binary to decimal is done by deviding the nymber yntil we get the 0 and note the remainder part.*/

#include <iostream>
#include <math.h>
using namespace std;
int main()
{

  int num;
  cout << "Enter the number : ";
  cin >> num;

  int rem = 0, ans = 0, power = 0;
  while (num > 0)
  {
    rem = num % 2;
    ans = rem * pow(10, power) + ans;
    power++;
    num = num / 2;
  }

  cout << ans << endl;
  return 0;
}