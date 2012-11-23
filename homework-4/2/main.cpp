#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    bool t = false;
    int i;
    
    for(i = 1; i <= 30; i++)
    {
          if (sin(i) < 0) {           
             t = false;
             break;
          }
    }
    
    cout << (t ? "true" : "false") << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
