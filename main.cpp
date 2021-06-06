#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

#define BLUE cout << "\033[0;34m";
#define GREEN cout << "\033[0;32m";
#define WHITE cout << "\033[0;37m";

void chat();

int main() {

  WHITE
  string user1;
  string user2;  
  string chat;
  cout << "User One: ";
  cin >> user1;
  cout << "User Two: ";
  cin >> user2;
  cout << "Chat name: ";
  cin >> chat;
  cout << "\t\t\t" << chat << endl;

  if (user1.length() > 10 || user2.length() > 10) {

    cout << "Character Limit(10) Exceeded! \n";
    main();

  }

  if (chat.length() > 10) {

    cout << "Character Limit(10) Exceeded! \n";
    main();

  }

  while (true) {

    char message1[100];
    char message2[100];
    string message1cpy = message1;
    string message2cpy = message2;

    WHITE
    cout << user1 << ": ";
    cin.getline(message1, 100);
    cout << "👤 " << user1 << ": ";
    BLUE
    cout << message1 << endl;

    WHITE
    cout << user2 << ": ";
    cin.getline(message2, 100);
    cout << "👤 " << user2 << ": ";
    GREEN
    cout << message2 << endl;

  }

}


