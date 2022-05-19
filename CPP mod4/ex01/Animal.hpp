#ifndef ANIMAL_HPP

# define ANIMAL_HPP
# include <iostream>

class Animal
{
    public:
        Animal(void);
        Animal & operator=(Animal const &rhs);
        Animal(Animal const &src);
        ~Animal(void);
        virtual void makeSound(void) const;
        std::string getType(void) const;
    protected:
        std::string _type;

    private:
};




#endif
