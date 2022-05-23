#ifndef MUTANTSTACK_H

# define MUTANTSTACK_H

template <typename T>
class MutantStack : public std::stack<T>
{
    public :
        MutantStack(void){};
        MutantStack & operator=(MutantStack const &rhs);
        MutantStack(MutantStack const &src){};
        ~MutantStack(void);
    private :
}


#endif
