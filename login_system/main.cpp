#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool registration(){

    string username;
    string password;

    //comparison variables
    string un;
    string pw;

    cout << "Enter your username: ";
    cin >> username;
    cout << "Enter your password: ";
    cin >> password;

    ifstream read("data\\" + username + ".txt");
    getline(read, un);
    getline(read, pw);

    if (un == username && pw == password){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int choice;
    
    cout << "1: Register" << endl;
    cout << "2: Login" << endl;
    cout << "Your choice: ";
    cin >> choice;
    
    if (choice == 1){
        string username;
        string password;
        
        cout << "Select a username: ";
        cin >> username;
        cout << "Select a password: ";
        cin >> password;

        ofstream file;
        file.open(".data\\" + username + ".txt");
        file << username << endl << password;
        file.close();
    }

}