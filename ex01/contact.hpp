#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
  private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

  public:
    Contact();
    ~Contact();

    void setFirstName(const std::string& firstName);
    void setLastName(const std::string& lastName);
    void setNickname(const std::string& nickname);
    void setPhoneNumber(const std::string& phoneNumber);
    void setDarkestSecret(const std::string& darkestSecret);

// void Contact::displayContact() const
// {
//     std::cout << "First name: " << firstName << std::endl;
//     std::cout << "Last name: " << lastName << std::endl;
//     std::cout << "Nickname: " << nickname << std::endl;
//     std::cout << "Phone number: " << phoneNumber << std::endl;
//     std::cout << "Darkest secret: " << darkestSecret << std::endl;
// }

    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickname() const;
    std::string getPhoneNumber() const;
    std::string getDarkestSecret() const;

    bool isEmpty() const;
};

#endif
