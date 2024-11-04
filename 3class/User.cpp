#include "User.h"
#include <iostream>

void User::Greet() {
  //
  std::cout << _name << " is Greeting" << std::endl;
}

User::User(std::string name) : _name(name) {
  std::cout << "Creating user " << _name << std::endl;
};

User::~User() {
  //
  std::cout << "User deleted: " << _name << std::endl;
};
