#ifndef CHAT_H_
#define CHAT_H_

#include <vector>

#include "message.h"
#include "user.h"

class Chat {
 public:
  Chat() = default;
  ~Chat() = default;

  void registerUser(const std::string& login, const std::string& password,
                    const std::string& name);
  bool loginUser(const std::string& login, const std::string& password);
  void sendMessage(const std::string& sender, const std::string& recipient,
                   const std::string& message);
  void broadcastMessage(const std::string& sender, const std::string& message);

 private:
  std::vector<User> users;  // Хранение зарегистрированных пользователей
  std::vector<Message> messages;  // Хранение сообщений в чате
};

#endif  // CHAT_H_
