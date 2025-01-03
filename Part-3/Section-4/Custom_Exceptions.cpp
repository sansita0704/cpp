#include <iostream>
#include "AccountLocked.h"

using namespace std;

void login()
{
    throw AccountLocked{};
}

int main()
{
    // If someone's account is locked, we cannot show this error using any of the built-in exceptions.
    // So, here we can create our custom exceptions to show this error.

    try
    {
        login();
    }
    catch (const exception &ex)
    {
        cout << ex.what() << endl;
    }

    return 0;
}