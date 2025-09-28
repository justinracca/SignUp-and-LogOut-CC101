#include <iostream>
using namespace std;

int main() {
    string username;
    string gmail;
    string password;
    string rePassword;
    string loginUser;
    string loginPass;
    
    cout << "It seems like you dont have an account yet. Sign up for free!\n" << endl;
    cout << "Enter a username: ";
    cin >> username;
    cout << "Enter your email: ";
    cin >> gmail;

    do {
        cout << "Enter a password: ";
        cin >> password;
        cout << "Re-enter your password: ";
        cin >> rePassword;

        if (password != rePassword) {
            cout << "The passwords you've entered does not match. Please try again.\n";
        }
    } while (password != rePassword);

    cout << "Account created successfully!\n" << endl;

    cout << "< < < LOG IN > > >\n" << endl;
    cout << "Enter your username: ";
    cin >> loginUser;
    cout << "Enter your password: ";
    cin >> loginPass;

    if (loginUser == username && loginPass == password) {
        cout << "Login successful! Welcome, " << username << "!" << endl;
    } else {
        cout << "Login failed! Incorrect username or password. Please try again. :(" << endl;
    }

    return 0;
}
