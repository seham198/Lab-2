#include <iostream>
using namespace std;
int main()
{
    char input;
    cout << " Enter any character:";
    cin >> input;
    
    if (input>= 'A'&& input<='Z')
    cout << " Character is a Capital letter";
    else if (input>= 'a'&& input<='z' )
    cout << "Character is a Small case letter";
    else if( input>= '0' && input<= '0')
    cout <<" Character is a digit";
    else
    cout << " Character is a Special case letter";
    return 0;
    
}
  