/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-l <apaula-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 17:45:56 by apaula-l          #+#    #+#             */
/*   Updated: 2025/07/03 10:49:28 by apaula-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    _index = 0;
    _oldestIndex = 0;
}

PhoneBook::~PhoneBook(void)
{
}

void PhoneBook::addContact(void)
{
    if (_index < 8)
    {
    _contacts[_index].setContact();
    _index++;
    }
    else
    {
        std::cout << "Maximum capacity reached. Overwriting oldest contact." << std::endl;
        _contacts[_oldestIndex].setContact();
        _oldestIndex = (_oldestIndex + 1) % 8;
    }
}

void PhoneBook::searchContacts()
{
    if (_index == 0)
    {
        std::cout << "PhoneBook is empty." << std::endl;
        return;
    }

    std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "|-------------------------------------------|" << std::endl;

    for (int i = 0; i < _index && i < 8; i++)
    {
        _contacts[i].displaySummary(i);
    }

    std::cout << "Enter an index to view full contact info: ";
    int index;
    std::cin >> index;

    if (std::cin.fail() || index < 0 || index >= _index || index >= 8)
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid index." << std::endl;
        return;
    }

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    _contacts[index].displayFull();
}
