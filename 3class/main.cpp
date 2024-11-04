#include "User.h"
#include <iostream>
using namespace std;

void Process() {

  User user("Cristian");
  user.Greet();

  User *user2 = new User("Jose");
  user2->Greet();
  delete user2;
};

int main() {
  cout << "Before processing" << endl;
  Process();
  cout << "After processing" << endl;
  return 0;
}
