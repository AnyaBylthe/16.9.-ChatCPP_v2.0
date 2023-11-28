#include "message.h"

std::string Message::getMessage() const { return _message; }

void Message::setMessage(const std::string& message) { _message = message; }

std::string Message::getSender() const { return _sender; }

void Message::setSender(const std::string& sender) { _sender = sender; }

std::string Message::getRecipient() const { return _recipient; }

void Message::setRecipient(const std::string& recipient) {
  _recipient = recipient;
}
