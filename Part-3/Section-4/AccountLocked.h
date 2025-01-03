#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <stdexcept>

using namespace std;

class AccountLocked : public exception
{
public:
    const char *what() const noexcept override
    {
        return "Your account is locked! Contact the admin.";
    }
    // In exception class, what() is declared with noexcept keyword so we have to also add it.
    // With this, we tell the compiler that this func does not throw any exception.
    // This has been done b/z we will be calling this method in catch block and we know that catch block should not contain code that can throw an exception.
    // So, if we throw an exception here, we will get a warning.
    // Although, our code will be compiled.

    // Note: noexcept keyword must be b/w const and override.
};
// It is good to have this class inherit exception class.

#endif