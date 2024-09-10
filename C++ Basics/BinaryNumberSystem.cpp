// The numbers are stored in the form of binary into m/o in form of 0 and 1 .
// POSITIVE numbers => are stored into m/o by converting them into binary no.
//  NEGATIVE numbers => 1. The no is converted into binary form.
//                      2.Add 0 in Prefix.
//                      3.1's compliment
//                      4.add + 1

// 0 => +  , False
// 1 => - , True
// how to find the given no is + or -ve no => 11000
// observe the last bit ie MSB
// Find the 1's compliment of no (By reversing the bit)
// Add +1 to it.

// Type modifier (add to the parent type and increase the space)
//  short => 2B
// long => 4B
// long long or long long int => 8B
// signed => +ve and -ve both no.
// unsigned => +ve no (0 to 2^32-1)

// BITWISE Operator
// 1. bitwise or |
// 2. bitwise and &
// 3. bitwise xor ^

// a>>i
// 4. left-shift (<<) its shift the bit to left by i places and the vacant places is filled with 0;
// 4. right-shift (>>) its shift the bit to right by i places and the vacant places is filled with 0;

#include <iostream>
#include <math.h>
using namespace std;
int main()
{

  int num;
  cout << "Enter the number : ";
  cin >> num;

  cout << (num << 2) << endl; // left shift

  return 0;
}
// LEFT-SHIFT => can be written as a << b
//  as  a*2^b

// RIGHT-SHIFT => a / 2^b