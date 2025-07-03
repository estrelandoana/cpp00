/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apaula-l <apaula-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 15:43:29 by apaula-l          #+#    #+#             */
/*   Updated: 2025/07/02 17:45:40 by apaula-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <limits>

class PhoneBook
{
    private:
        Contact _contacts[8];
        int     _index;
        int     _oldestIndex;

    public:
        PhoneBook(void);
        ~PhoneBook(void);

        void addContact(void);
        void searchContacts(void);
};

#endif
