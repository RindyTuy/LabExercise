// check check prime number
// written by Rindy Tuy
#include <iostream>
using namespace std;
int main()
{
    int num;             // declar number
    bool isPrime = true; //declare for checking prime

    cout << "Enter a Number: "; //print to user
    cin >> num;                 // num input from user

    for (int i = 2; i <= num / 2; i++) //calculate to check if it prime
    {
        if (num % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    //print output to user
    if (isPrime) //if number is prime
        cout << num << " is a Prime Number" << endl;
    else //if number is composite
        cout << num << " is a composite Number" << endl;

    return 0;
}