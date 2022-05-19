#ifndef ANIMAL_HPP

# define ANIMAL_HPP
# include <iostream>

class AAnimal
{
    public:
        AAnimal(void);
        AAnimal & operator=(AAnimal const &rhs);
        AAnimal(AAnimal const &src);
        ~AAnimal(void);
        virtual void makeSound(void) const = 0;
        std::string getType(void) const;
    protected:
        std::string _type;

    private:
};




#endif
