#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
using namespace std;


//login Details
string username = "Test";
string passowrd = "test"; 
int choice;
bool menu = true;
int main()
{
    SetConsoleTitleA("Snows Cheat loader");
    cout << "Welcome <3" << endl;
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> passowrd;
    if (username == username && passowrd == passowrd)
    {
        cout << "Authed"<<endl;
        while (menu == true)
        {
            cout << "test" << endl;
            //your code
            cout << "2-EXIT" << endl;
            //your code
            cout << "Enter Choice and press return: " << endl;
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "test" << endl;
                break;
            case 2:
                cout << "Close Application...." << endl;
                menu = false;
                break;
            default:
                cout << "not a valid choice partner" << endl;
                cin >> choice;
                break;
            }
            }
    }
    else {
        cout << "not authorized";
        return 0;
    }
    return 0;
  }