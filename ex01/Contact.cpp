#include "Contact.hpp"

Contact::Contact(const std::string& firstName, const std::string& lastName, const std::string& nickname,
            const std::string& phoneNumber, const std::string& secret)
        : firstName(firstName), lastName(lastName), nickname(nickname),
          phoneNumber(phoneNumber), secret(secret) {}

const std::string& Contact::getFirstName() const { return firstName; }
const std::string& Contact::getLastName() const { return lastName; }
const std::string& Contact::getNickname() const { return nickname; }
const std::string& Contact::getPhoneNumber() const { return phoneNumber; }
const std::string& Contact::getSecret() const { return secret; }
