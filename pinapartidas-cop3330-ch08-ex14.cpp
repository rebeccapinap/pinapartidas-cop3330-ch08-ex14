// Includes header file
#include "header.h"

int main() 
{
    // Data dictionary
    int addResult;
    int addConstResult;
    int a = 1;
    int b = 2;

    // Answer to question
    cout << "Answer: \nYou can declare a non-reference function argument const.\n"; 
    cout << "This would mean that you do not want the variables passed in the argument to be able to be modified within the function.\n";
    cout << "We would want to do that if you want to omit changing a variable that should never be changed as a security measure.\n";
    cout << "People don't do that often because if you pass in a variable sometimes in the future you will want to change the variable you passed in and you will want to keep your options open.\n";

    // Example for non-constant function
    cout << "For example, if you call function 1 as int add(int a, int b) and pass in a = 1 and b = 2, if within the function you want to change a to 5, the function will return 7.\n";
    cout << "You can see it here: \n";
    cout << "Running add: \n";
    addResult = add(a, b);
    cout << "Result: " << addResult << "\n";

    // Example for constant function
    cout << "However, if you call function 2 as int addConst(const int a, const int b) and pass in a = 1 and b = 2, if within the function you want to change a to 5, an error will be generated.\n";
    cout << "So, the only answer you can get is 3. You can see it here: \n";
    cout << "Running addConst: \n";
    addConstResult = addConst(a, b);
    cout << "Result: " << addConstResult << "\n";
}

int add(int a, int b)
{
    // Change to a possible
    a = 5;
    return a+b;
}

int addConst(const int a, const int b)
{
    // No change to a possible
    return a+b;
}