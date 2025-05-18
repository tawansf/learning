#include <iostream>

using namespace std;

int main()
{
    try
    {
         int age = 18;
         if (age >= 18) {
            cout << "Access granted: You are old enough.";
         } else {
            throw (age);
         }
    }
    catch(int age)
    {
        cout << "Access denied: You must be at least 19 years old." << endl;
        cout << "Your age is: " << age;
    }
    
    return 0;
}
