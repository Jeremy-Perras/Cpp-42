# include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain Constuctor" << std::endl;
    return ;

    std::string ideas[] = {
        "good ideas",
        "bad ideas",
        "some ideas",
        "very good ideas",
        "stupid ideas",
        "other ideas",
    };
    for (int i = 0; i < 100, i++)
    {
        this->_ideas[i] = ideas[i % 6];
    }
}

Brain & Brain::operator=(Brain const &rhs)
{
    std::cout << "Brain Assignement" << std::endl;
    if(this == &rhs)
     return(*this);
    for (int i = 0 ; i < 100; i++)
        this->_ideas[i] =  rhs._ideas[i];
    return(*this);
}

Brain::Brain(Brain const &src)
{
    std::cout << "Brain Copy" << std::endl;
    *this = src;
    return ;
}

Brain::~Brain(void)
{
    std::cout << "Brain Destructor" << std::endl;
    return ;
}
