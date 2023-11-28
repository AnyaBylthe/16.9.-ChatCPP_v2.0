#ifndef USER_H_
#define USER_H_

#include <string>

class User {
 public:
  User() = default;
  ~User() = default;

  User(const std::string& user_login, const std::string& user_password,
       const std::string& user_name)
      : _login(user_login), _password(user_password), _name(user_name) {}

  void setUserLogin(const std::string& login);
  std::string getUserLogin() const;
  void setUserPassword(const std::string& password);
  std::string getUserPassword() const;
  void setUserName(const std::string& name);
  std::string getUserName() const;

 private:
  std::string _login;     // переменная с логином
  std::string _password;  // переменная с паролем
  std::string _name;      // переменная с именем
};

#endif  // USER_H_
