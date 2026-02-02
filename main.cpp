#include <iostream>
using namespace std;

int main()
{
  cout << "Hello World!" << endl;
  int x;
  cout << "Enter an integer: ";
  cin >> x;

  for (int i = 1; i<=x; ++i)
  {
      sum+=i;
  }
  cout << "The sum of integers from 1 to X is: " << sum << endl;
}
