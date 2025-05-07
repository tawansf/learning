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

int main()
{
    // bool isCheck = IsChecked();
    // Sum(1, 2);
    // cout << "Checked: " << isCheck;
    // For();
    // Division(4, 2);
    // If(-1);
    // Switch(1);
    While();

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
    } else {
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

void While() {
    int nOfTrying = 0;
    while (nOfTrying < 5)
    {
        nOfTrying++;
        cout << "The number of trying is: " << nOfTrying << "\n";
    }
}