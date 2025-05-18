#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // vector of cars   
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // for each
    for (string car: cars) {
        cout << car << endl;
    }

    // get first item
    cout << "First item is: " + cars.front() << endl;

    // get last item
    cout << "Last item is:" + cars.back() << endl;

    // get by ind, in this case: second item
    cout << "Car: " << cars.at(1) << endl;

    return 0;
}
