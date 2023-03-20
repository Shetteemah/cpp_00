#include "phonebook.hpp"
#include <iostream>
#include <string>

int main()
{
    PhoneBook phoneBook;

    std::string command;
    while (true)
    {
        std::cout << "Please enter a command: ADD, SEARCH or EXIT" << std::endl;
        std::getline(std::cin, command);

        if (command == "ADD")
        {
            Contact contact;
            std::string field;

            std::cout << "Enter first name: ";
            std::getline(std::cin, field);
            contact.setFirstName(field);

            std::cout << "Enter last name: ";
            std::getline(std::cin, field);
            contact.setLastName(field);

            std::cout << "Enter nickname: ";
            std::getline(std::cin, field);
            contact.setNickname(field);

            std::cout << "Enter phone number: ";
            std::getline(std::cin, field);
            contact.setPhoneNumber(field);

            std::cout << "Enter darkest secret: ";
            std::getline(std::cin, field);
            contact.setDarkestSecret(field);

            phoneBook.addContact(contact);
        }
        else if (command == "SEARCH")
        {
            phoneBook.searchContacts();
        }
        else if (command == "EXIT")
        {
            std::cout << "Goodbye!" << std::endl;
            break;
        }
    }

    return 0;
}
