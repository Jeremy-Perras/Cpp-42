
#ifndef CONTACT_H
# define CONTACT_H
# include <iostream>
# include  <iomanip>

class Contact
{
  public:
    Contact(void);
    ~Contact(void);
    bool setdata(void);
    void _print_data(int i);
    void _show_data(int i);

  private:
    std::string _fname;
    std::string _lname;
    std::string _nickname;
    std::string _phonenumber;
    std::string _darksecret;
    std::string _cut(std::string str);

};


#endif
