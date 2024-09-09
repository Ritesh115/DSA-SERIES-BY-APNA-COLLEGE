/*done by multiplying everydigit by 2 ki power 0 then 1,2 and from left to right and adding all the nymber together.
 */
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
    ans = rem * pow(2, power) + ans;
    power++;
    num = num / 2;
  }

  cout << ans << endl;
  return 0;
}