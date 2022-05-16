
#include "includes/Phonebook.hpp"

int PhoneBook::_index = 0;
int PhoneBook::_index2 = 0;

PhoneBook::PhoneBook(void)
{
  return;
}

PhoneBook::~PhoneBook(void)
{
  return;
}

void PhoneBook::add_contact(void)
{
  bool flag = 0;

  if (this->_index == 8)
    this->_index = 0;
  flag = (this->contacts[this->_index]).setdata();
  while(flag == 0)
  {
    std::cout << "Please enter correct data without empty"
    << std::endl;
    flag = (this->contacts[this->_index]).setdata();
  }
  this->_index++;
  this->_index2++;
  if (this->_index2 >= 8)
    this->_index2 = 8;
}

int PhoneBook::_get_index(void)
{
  int flag = 1;
  int i;
  std::string str;

  std::cout << "Choose the index of contact you want :" << std::endl;
  getline(std::cin, str);
  i = atoi(str.c_str());
  if (i >= 1 && i <= this->_index2)
    flag = 0;
  while(flag)
  {
    std::cout << "Please enter a correct index :" << std::endl;
    getline(std::cin, str);
    i = atoi(str.c_str());
    if (i >= 1 && i <= this->_index2)
      flag = 0;
  }
  return(i);
}

void PhoneBook::print_contacts(void)
{
  int i;

  if(this->_index == 0)
    std::cout << "Please enter contact first" << std::endl;
  else
  {
    std::cout << std::right << std::setw(10) << "index" << "|" ;
    std::cout << std::right << std::setw(10)
      << "First name" << "|";
    std::cout << std::right << std::setw(10)
      << "Last name" << "|";
    std::cout << std::right << std::setw(10)
      << "Nick name"<< "|";
    std::cout << std::endl;
    for(i = 0; i < this->_index2; i++)
      this->contacts[i]._print_data(i);
    i = this->_get_index();
    this->contacts[i - 1]._show_data(i);
  }
}
