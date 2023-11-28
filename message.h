#ifndef MESSAGE_H_
#define MESSAGE_H_

#include <string>

class Message {
 public:
  Message() = default;
  ~Message() = default;

  Message(const std::string& message, const std::string& sender,
          const std::string& recipient)
      : _message(message), _sender(sender), _recipient(recipient) {}

  void setMessage(const std::string& message);
  std::string getMessage() const;

  void setSender(const std::string& sender);
  std::string getSender() const;

  void setRecipient(const std::string& recipient);
  std::string getRecipient() const;

 private:
  std::string _message;    // текст сообщения
  std::string _sender;     // логин отправителя
  std::string _recipient;  // логин получателя
};

#endif  // MESSAGE_H_
