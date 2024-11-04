#pragma once
#include <string>
class User {

public:
  User(std::string name);
  ~User();
  void Greet();

private:
  std::string _name;
};