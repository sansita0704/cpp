#include <iostream>
#include <cstdlib> // rand() and srand() is defined in this file of STL.
#include <ctime>   // time() is defined in this file of STL.

using namespace std;

int main()
{
    /*
    - The rand() is used to generate random nos.
    - It is not actually a random no. b/z it is generated on the basis of some mathematical formula.
    - So they are called pseudo-random numbers.
    - It do so by using an initial value which is known as seed.

    - The srand() (short for seed rand) is used to seed the random number generator.
    - The random number generator is an algorithm that generates a sequence of pseudo-random numbers.
    - Seeding the random number generator refers to the initializing of the random number generator algorithm using a specific value called the seed.

    - If we fix an initial value i.e seed for rand() then the same no. will be generated every time we run the program.
    - To get a diff. random no. every time, we use the value of time elapsed as seed value.
    - So that every time a new initial value is set and hence a diff. random no. will be generated.
    */

    // long elapsedSeconds = time(0);
    // This function returns the value of the time elapsed (in sec.) from Jan 1, 1970.
    // To call this function, we have to give it an argument i.e nullptr (null pointer).
    // It returns a random value each time so we can use it to seed the rand().

    srand(time(0)); // seeding
    // srand(elapsedSeconds);

    int number = rand() % 10;
    // This will return the value of remainder obtained by the division of the returned value of rand() and 10.
    // So, a single digit random no. is obtained.

    cout << number << endl;

    // Exercise

    const short minValue = 1;
    const short maxValue = 6;
    short first = (rand() % (maxValue - minValue + 1)) + minValue;
    short second = (rand() % (maxValue - minValue + 1)) + minValue;
    cout << first << ", " << second;

    return 0;
}
