#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int i, k, summ = 0, temp;
    
    cout << "enter k" << endl;
    cin >> k;
    
    if (k > 1 && k < 27) {
        for(i = 100; i < 1000; i++)
        {
              temp = i;
              summ += temp%10;
              temp /= 10;
              summ += temp%10;
              temp /= 10;
              summ += temp%10;
              
              if (summ == k) {
                 cout << i << endl;
                 break;
              }
                 
              
              summ = 0;
        }
    } else {
        cout << "k must be > 1 and < 27" << endl;
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
