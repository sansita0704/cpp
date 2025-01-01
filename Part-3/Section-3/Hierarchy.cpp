#include <iostream>

using namespace std;

int main()
{
    // With inheritance, we can reuse code an achieve polymorphism.
    // But too much of a good thing is a bad thing.
    // So, we should not create deep inheritance hierarchies.
    // So, it is good when we use them the right way.
    // Go to Screenshots folder to see a real example.

    // As we inherit classes, we create dependencies or coupling b/w them.
    // Here, course and user class is dependent on entity.
    // So, if we make any change in entity class we have to make change in all the class getting derived from entity and user class.
    // Even if there is no change but all the files linked with it has to be recompiled.
    // More is the hierarchy, higher is the cost of a change.
    // Limit it to a max of 3 levels.

    // Go to Screenshots folder to see alternative solution.
    // Here, there is a bit of duplication.
    // But these classes can change and evolve independently.

    return 0;
}