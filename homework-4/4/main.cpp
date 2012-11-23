#include <cstdlib>
#include <iostream>

using namespace std;

bool palindrom(string s)
{    
    int i = 0, j=s.length()-1;
    for (; i < j; i++, j--) if (s[i]!=s[j]) return false;
    return true;
}

int main()
{
    string number;
    
    cout << "enter number" << endl;
    cin >> number;
    
    if (palindrom(number)) {
       cout << "palindrom" << endl;
    } else {
       cout << "not palindrom" << endl;
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
