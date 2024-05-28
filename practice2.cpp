#include <iostream>
using namespace std;

bool isPrime(int n)
{

    if (n < 2)
        return false;

    else if (n == 2 || n == 3)
        return true;

    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{

    cout << "Enter number to be checked:";
    int num;
    cin >> num;

    cout << isPrime(num);
    return 0;
}