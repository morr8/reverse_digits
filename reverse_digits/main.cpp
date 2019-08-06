#include <iostream>
using namespace std;

int main()
{
    cout << "Enter an integer: " << endl;
    int n;
    cin >> n;
    int digit;
    
    // TODO: Print the digits of n in reverse
    if (n < 0)
    {
        while (n != 0)
        {
            digit = n % 10;
            digit *= -1;
            cout << digit;
            n = n / 10;
        }
        cout << "-";
    }
    else if (n > 0)
    {
        while (n != 0)
        {
            digit = n % 10;
            cout << digit;
            n = n / 10;
        }
    }
    else
    {
        cout << 0;
    }
    cout << endl;
    
    return 0;
}
