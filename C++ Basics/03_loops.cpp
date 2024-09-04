#include <iostream>
using namespace std;
int main()
{

  // while // for //do-while
  int num, sum = 0, i = 0;
  cout << "enter number : ";
  cin >> num;

  do
  {
    cout << i << " ";
    i++;
  } while (i <= num);

  // cout << sum << endl;
  return 0;
}