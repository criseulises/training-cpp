#include "User.h"
#include <iostream>
#include <memory>
using namespace std;

void Process() {

  User user("Cristian"); // STACK MEMORY
  user.Greet();

  User *user2 = new User("Jose"); // HEAP MEMORY
  user2->Greet();
  delete user2;

  unique_ptr<User> user3 = make_unique<User>("Carlos");
  user3->Greet();


  shared_ptr<User> user4 = make_shared<User>("MARCOS");
  user4->Greet();
  shared_ptr<User> user5 = user4;
  user5->Greet();

};

int main() {
  cout << "Before processing" << endl;
  Process();
  cout << "After processing" << endl;
  return 0;
}
