#include <iostream>
#include <string>

using namespace std;

class User
{
public:
    User() {
        cout << "Constructor";
    }

    User (string name) {

    }

    int id;
    string name;
    string email;
    void SendEmailVerification();
};

User::User(string name) {
    cout << name << endl
}

void User::SendEmailVerification()
{
    cout << "E-mail sent.";
}

int main()
{
    User user;
    user.id = 1;
    user.name = "Tawan Silva";
    user.email = "email@email.com";

    cout << "Id: " + user.id << endl;
    cout << "Name: " + user.name << endl;
    cout << "E-mail: " + user.email << endl;

    user.SendEmailVerification();

    return 0;
}
