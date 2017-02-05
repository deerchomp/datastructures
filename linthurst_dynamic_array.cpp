/* Dynamic array 
Brendon Linthurst 659223
CS41
*/
#include <iostream>
using namespace std;

int main ()
{
  int count;
  int *p;
  cout << "How many numbers would you like to type? ";
  cin >> count;
  p = new int[count];
    for (int i = 0; i < count; i++)
    {
      cout << "Enter number: ";
      cin >> p[i];
    }
    cout << endl;
    for (int i = 0; i < count; i++)
      cout << p[i] << ' ';
    delete[] p;
    cout << endl;
  system("PAUSE");
  return 0;
}