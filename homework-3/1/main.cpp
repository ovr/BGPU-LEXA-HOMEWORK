#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int i, countElements = 13;
    float result = 1;
    
    float a[13] = {1, 1};
    
    for (i = 2; i <= countElements; ++i)
    {
        a[i] = a[i-2]+(a[i-1]/pow(2, i-1));
        result *= a[i];
    }
    
    cout << result << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
