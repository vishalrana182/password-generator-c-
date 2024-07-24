#include <bits/stdc++.h>
using namespace std;

const string pool = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#_-+=()";

string generatePassword(int length) {
  string password;  
  srand(time(0));

  for (int i=0;i<length;i++) {
    int random = rand()%pool.size();
    password += pool[random];
  }

  return password;
}

int main() {
  int length;

  cout << "password length: ";
  cin >> length;

  string password = generatePassword(length);
  cout << "Your generated password is: " << password << endl;

  return 0;
}
