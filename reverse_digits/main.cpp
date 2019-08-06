#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a positive integer: " << endl;
    int n;
    cin >> n;
    
    // TODO: Print the digits of n in reverse
    while (n > 0)
    {
        int digit = n % 10;
        cout << digit;
        n = n / 10;
    }
    
    cout << endl;
    
    return 0;
}
