#include <iostream>
#include <string>

using namespace std;

class User
{
public:
    User() {
        cout << "Constructor" << endl;
    }

    void Validate() {
        cout << "Validate" << endl;
    }

    int id;
    string name;
    string email;
    void SendEmailVerification();
};

class AdminUser : public User {
    public:
        AdminUser() {
            cout << "admin user constructor" << endl;
        }

        void Validate() {
            cout << "validate admin" << endl;
        }
};

void User::SendEmailVerification()
{
    cout << "E-mail sent." << endl;
}

int main()
{
    User user;
    user.id = 1;
    user.name = "Tawan Silva";
    user.email = "email@email.com";

    AdminUser admUser;
    admUser.Validate();

    cout << "Id: " + user.id << endl;
    cout << "Name: " + user.name << endl;
    cout << "E-mail: " + user.email << endl;

    user.SendEmailVerification();

    return 0;
}
