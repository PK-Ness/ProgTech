#include <iostream>

using namespace std;

int main()
{
for (int i = 20; i >= 1; i--) {
  if (i == 13) {
    continue;
  }
  cout <<"Andar " << i << "\n";
}
return 0;
}
