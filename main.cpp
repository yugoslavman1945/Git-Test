#include <iostream>
using namespace std;

int main()
{
  cout << "Hello World!" << endl;
  int x;
  cout << "Enter an integer: ";
  cin >> x;

  int sum = 0;
  int product = 1;
  
  for (int i = 1; i<=x; ++i)
  {
      sum+=i;
      product*=i;
  }
  cout << "The sum of integers from 1 to X is: " << sum << endl;
  cout << "The product of integers from 1 to X is: " << product << endl;
}
