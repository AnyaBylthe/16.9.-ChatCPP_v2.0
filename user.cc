#include "user.h"

std::string User::getUserLogin() const { return _login; }

void User::setUserLogin(const std::string& login) { _login = login; }

std::string User::getUserPassword() const { return _password; }

void User::setUserPassword(const std::string& password) {
  _password = password;
}

std::string User::getUserName() const { return _name; }

void User::setUserName(const std::string& name) { _name = name; }
