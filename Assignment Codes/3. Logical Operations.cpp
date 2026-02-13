#include <iostream>
using namespace std;

int main()
{
    int age;

    // Input
    cout << "Enter your age: ";
    cin >> age;

    // Condition using logical AND (&&)
    if (age >= 18)
    {
        cout << "You are eligible to vote." << endl;
    }
    else
    {
        cout << "You are NOT eligible to vote." << endl;
    }

    return 0;
}
