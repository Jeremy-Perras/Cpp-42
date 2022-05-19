#ifndef WRONGANIMAL_H

# define WRONGANIMAL_H
# include <iostream>

class WrongAnimal
{

    public:
        WrongAnimal(void);
        WrongAnimal & operator=(WrongAnimal const &rhs);
        WrongAnimal(WrongAnimal const &src);
        ~WrongAnimal(void);
        void makeSound(void) const;
        std::string getType(void) const;

    protected:
        std::string _type;
    private:
};

#endif
