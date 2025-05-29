#include <iostream>
using namespace std;

int main() {
    int contra = 1234;  
    int password;
    string user;
    string username="Diego";
    
/*for user*/
 cout << "Please write your user "<<endl;
    cin >> user;
    while (user != username) {
        if (user > username) {
            cout << "user: "<<user<< " Write your user again "<<endl;
        } else {
            cout << "user: "<<user<< " Write your user again "<<endl;
        }
        cin >> user;  
    }
/*For password*/

cout << "Write your passwword "<<user<<endl;
cin >> password;
while (password != contra) {
        if (password > contra) {
            cout << "Incorrect password ";
        } else {
            cout << "Incorrect password ";
        }
        cin >> password;  
    }

    cout << "Welcome: "<<user << endl;
    return 0;
}