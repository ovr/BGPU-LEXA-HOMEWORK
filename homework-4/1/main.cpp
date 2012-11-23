#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int n, i, r = 1;
    
    cout << "enter n" << endl;
    cin >> n;
    
    for(i = 2; i > 0; i++)
    {
          r *= i;
        
          if (r > n)
             break;
    }
    
    cout << i << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
