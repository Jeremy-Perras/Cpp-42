
#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"
# include <iostream>
# include <cstdlib>

class PhoneBook
{
  public:
    PhoneBook(void);
    ~PhoneBook(void);
    void add_contact(void);
    void print_contacts(void);
    Contact contacts[8];

  private:
    static int _index;
    int _get_index(void);
    static int _index2;
};

#endif
