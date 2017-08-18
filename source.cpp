/*
Jie Wu
This program will take in a postive number and calculate the fibonacci sequence.
*/

#include <iostream>
using namespace std;

int fib (int n);

int main ()
{
    int n;

    do
    {
        cout << "Enter a positive number: ";
        cin >> n;
    }   while (n < 0);

    cout << "The fibonacci sequence is: " << fib(n) << endl;

    return 0;
}

int fib (int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return fib(n-1) + fib (n - 1);
}

/*
Sample Run
Enter a positive number: 5
The fibonacci sequence is: 16
*/
