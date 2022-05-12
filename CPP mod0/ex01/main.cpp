# include <iostream>
# include "Contact.hpp"
# include "Phonebook.hpp"

int main(void)
{

  PhoneBook phonebook;
  std::string str;
  int flag = 1;

  while(flag)
  {
    std::cout << "Enter your command :"<< std::endl;
    getline(std::cin, str);
    if(str == "ADD")
      phonebook.add_contact();
    else if (str == "SEARCH")
      phonebook.print_contacts();
    else if (str == "EXIT")
      flag = 0;

  }
  return(0);
}
