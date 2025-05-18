#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ofstream MyFile("myfile.txt");

    MyFile << "Life is good." << endl;

    MyFile.close();

    string myText;

    ifstream MyReadFile("myfile.txt");

    while (getline(MyReadFile, myText))
    {
        cout << myText;
    }

    MyReadFile.close();

    return 0;
}
