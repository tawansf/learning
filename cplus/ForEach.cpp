#include <iostream>
#include <vector>

using namespace std;

float avgAges();

int main(int argc, char const *argv[])
{
    int ageArray[5] = {10, 20, 30, 40, 50};

    for (int i: ageArray) {
        cout << "Age: " << i << endl;
    }

    string cars[] = {"BMW", "KIA", "Ford", "Fiat", "Mitsubishi"};

    for (string car: cars) {
        cout << "Brand: " << car << endl;
    }

    vector<string> fakeNames = {"Tatas", "Kamis", "Layanner", "Silva"};


    int length = sizeof(fakeNames) / sizeof(fakeNames[0]);

    //fakeNames.clear();

    if (length > 0) {
        /*for (string name: fakeNames) {
            cout << name << endl;
        }*/

        for (int i = 0; i <= length; i++) {
            cout << fakeNames[i] << endl;
        }
    } else {
        cout << "No fake names in vector string" << endl;
    }

    cout << avgAges() << endl;

    return 0;
}


float avgAges() {
    int ages[] = {1, 3, 40, 39, 49, 26, 100, 39, 10};
    float sumAges = 0;
    int length = sizeof(ages) / sizeof(ages[0]);

    for (int age: ages) {
        sumAges += age;
    }

    return sumAges / length;
}