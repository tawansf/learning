#include <iostream>
using namespace std;

bool IsChecked();
void Sum(int x, int y);
int Multi(int x, int y);
int Area(int x, int y);
void Division(int x, int y);
void For();
void If(int x);
void Switch(int x);
void While();

struct Car {
    int id;
    string name;
    string modelName;
    string plate;
    string year;
    int serialNumber;
    int numOfDoors;
    string color;
    VehicleType type;
};

enum VehicleType {
    SUV,
    SEDAN
};

string VehicleTypeParse(int type);

int main()
{
    // bool isCheck = IsChecked();
    // Sum(1, 2);
    // cout << "Checked: " << isCheck;
    // For();
    // Division(4, 2);
    // If(-1);
    // Switch(1);
    // While();

    // Input and Output data

    /* int x, y;

    cout << "Type X value... \n";
    cin >> x;
    cout << "Type Y value... \n";
    cin >> y;

    cout << "Area result is: " << Area(x, y); */

    // int age;       // 2 or 4 bytes
    // float height;  // 4 bytes
    // bool isActive; // 1 byte
    // double salary; // 8 bytes
    // string name;   //
    // char gender;

    // cout << "Your age: \n";
    // cin >> age;
    // cout << "Your name: \n";
    // cin >> name;
    // cout << "Working? \n";
    // cin >> isActive;
    // cout << "Salary pretension: \n";
    // cin >> salary;
    // cout << "Gender \n";
    // cin >> gender;

    // cout << "---------------------- \n";
    // cout << "Name: " << name << "\n";
    // cout << "Age: " << age << "\n";
    // cout << "Working: " << (isActive == true ? "Yes" : "No") << "\n";
    // cout << "Salary: " << salary << "\n";
    // cout << "Gender: " << gender << "\n";
    // cout << "---------------------- \n";

    Car car1;

    car1.id = 1;
    car1.numOfDoors = 4;
    car1.name = "BMW";
    car1.color = "red";
    car1.type = SEDAN;

    cout << "My car is a " << car1.color << " " << car1.name << " and have " << car1.numOfDoors << " doors, your category is " << car1.type << endl;


    return 0;
}

bool IsChecked()
{
    return true;
}

void Sum(int x, int y)
{
    cout << "The sum of " << x << " + " << y << " is equals to: " << x + y;
}

int Multi(int x, int y)
{
    return x * y;
}

int Area(int x, int y)
{
    return x * y;
}

void Division(int x, int y)
{
    cout << "The division of " << x << " + " << y << " is equals to: " << x / y << "\n";
}

void For()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Entered " << i + 1 << " times in the loop. \n";
    }
}

void If(int x)
{
    if (x == 1)
    {
        cout << "It\'s true";
    }
    else if (x == 0)
    {
        cout << "It\'s false";
    }
    else
    {
        cout << "The number isn't in the possible values!";
    }
}

void Switch(int x)
{
    switch (x)
    {
    case 1:
        cout << "Sunday";
        break;
    case 2:
        cout << "Moonday";
        break;
    case 3:
        cout << "Other day";
        break;
    default:
        cout << "The day not exist. Try again!";
        break;
    }
}

void While()
{
    int nOfTrying = 0;
    while (nOfTrying < 5)
    {
        nOfTrying++;
        cout << "The number of trying is: " << nOfTrying << "\n";
    }
}