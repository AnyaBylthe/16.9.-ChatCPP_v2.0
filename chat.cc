#include "chat.h"

#include <iostream>

void Chat::registerUser(const std::string& login, const std::string& password,
                        const std::string& name) {
  users.push_back(User(login, password, name));
  std::cout << "User " << login << " registered successfully." << std::endl;
}

bool Chat::loginUser(const std::string& login, const std::string& password) {
  for (const User& user : users) {
    if (user.getUserLogin() == login && user.getUserPassword() == password) {
      std::cout << "User " << login << " logged in." << std::endl;
      return true;
    }
  }

  std::cout << "Invalid login or password." << std::endl;
  return false;
}

void Chat::sendMessage(const std::string& sender, const std::string& recipient,
                       const std::string& message) {
  messages.push_back(Message(message, sender, recipient));
  std::cout << "Message sent from " << sender << " to " << recipient << ": "
            << message << std::endl;
}

void Chat::broadcastMessage(const std::string& sender,
                            const std::string& message) {
  for (const User& user : users) {
    if (user.getUserLogin() != sender) {
      messages.push_back(Message(message, sender, user.getUserLogin()));
    }
  }

  std::cout << "Broadcast message sent from " << sender << ": " << message
            << std::endl;
}
