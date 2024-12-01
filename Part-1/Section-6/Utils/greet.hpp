#ifndef UTILS_GREET
#define UTILS_GREET

#include <string>
// iostream header file also brings the func of string header file along with the other functionalities.
// But we only want string file here.

namespace messaging
{
    // Function declaration or prototype
    void greet(std::string name);
}

#endif
/*
• The #ifndef, #define, and #endif directives are preprocessor directives that are used to prevent multiple inclusions of the same header file in a program as they can lead to following errors.

1. Duplicate Symbol Definitions: Header files often contain declarations of variables, functions, and classes.
- If a header file is included multiple times in the same program, the definitions of these symbols may be duplicated, leading to redefinition errors during the compilation process.

2. Multiple Definitions of Global Variables: If a header file contains definitions of global variables, including it multiple times in the same program can result in multiple definitions of the same global variable.

3. Increased Compilation Time: Including the same header file multiple times in a program can increase the compilation time.
- Because the compiler needs to process the same code multiple times. This can be inefficient and will make the code harder to maintain and debug.

• Here's how these directives work:

1. #ifndef (if not defined): This directive checks if a particular const is not defined. If the specified const is not defined,
the block of code following the #ifndef directive is processed.

2. #define: This directive defines the const specified in the #ifndef directive.

3. The block of code between #ifndef and #endif is only processed if the specified const is not defined.
- This ensures that the code within the block is included in the program only once.

4. #endif: This directive marks the end of the block of code.

Source: ChatGPT
*/
// So, if we include this file again in our file, the const will be already defined so the code will not be executed.