#include "chat.h"

int main() {
  Chat chat;

  // Регистрация пользователей
  chat.registerUser("user1", "password1", "User One");
  chat.registerUser("user2", "password2", "User Two");

  // Попытка входа с неверными данными
  chat.loginUser("user1", "wrong_password");

  // Вход с верными данными
  chat.loginUser("user1", "password1");

  // Отправка сообщения конкретному пользователю
  chat.sendMessage("user1", "user2", "Hello User Two!");

  // Обмен сообщениями между всеми пользователями чата
  chat.broadcastMessage("user1", "Broadcast message!");

  return 0;
}
