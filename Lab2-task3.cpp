#include <iostream>
using namespace std;
int main()
{
  int num1, num2;
  char op;
  cout << " Enter two numbers:";
  cin >> num1 >> num2;
  cout << " Enter the operation(+,-,*,/):";
  cin >> op;
  if (op == '+')
  cout <<" The result is:" << num1 + num2;
  else if (op == '-')
  cout <<" The result is:" << num1 - num2;
  else if (op == '*')
   cout <<" The result is:" << num1 * num2;
  else if (op == '/')
  {
      if (num2 == 0)
      cout << " Undefined operation";
     else
     cout << " The result is:" << num1 / num2;
  }
     else
 cout << " Invaild operation";
   
   return 0;
}
  