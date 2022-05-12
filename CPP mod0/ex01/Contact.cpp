#include "Contact.hpp"

Contact::Contact(void)
{
  return ;
}

Contact::~Contact(void)
{
  return ;
}

bool Contact::setdata(void)
{

  std::cout << "First name :" << std::endl;
  std::getline(std::cin, this->_fname);
  std::cout << "Last name :" << std::endl;
  std::getline(std::cin, this->_lname);
  std::cout << "nickname :" << std::endl;
  std::getline(std::cin, this->_nickname);
  std::cout << "phone number :" << std::endl;
  std::getline(std::cin, this->_phonenumber);
  std::cout << "darksecret :" << std::endl;
  std::getline(std::cin, this->_darksecret);
  if(this->_fname == "" || this->_lname == "" ||
    this->_nickname == "" || this->_phonenumber == ""
    || this->_darksecret == "")
    return(0);
  return(1);
}

std::string Contact::_cut(std::string str)
{
  if(str.length() <= 10)
    return(str);
  return(str.substr(0,9) + ".");
}

void Contact::_print_data(int i)
{
  i++;
  std::cout << std::right << std::setw(10) << i << "|" ;
  std::cout << std::right << std::setw(10)
		<< this->_cut(this->_fname) << "|";
  std::cout << std::right << std::setw(10)
		<< this->_cut(this->_lname) << "|";
  std::cout << std::right << std::setw(10)
  	<< this->_cut(this->_nickname) << "|";
  std::cout << std::endl;
}

void Contact::_show_data(int i)
{
  std::cout << i << std::endl;
  std::cout << this->_fname << std::endl;
  std::cout << this->_lname << std::endl;
  std::cout << this->_nickname << std::endl;
  std::cout << this->_phonenumber << std::endl;
  std::cout << this->_darksecret << std::endl;
}
