#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP


#include <iostream>
#include <string>
#include <stdexcept>
#include <cstdlib>

#include <algorithm>
#include <stack>
#include <deque>
#include <iterator>


#define BOLD "\033[1m"
#define RES "\033[0m"
#define RED "\033[31m"
#define GRE "\033[32m"
#define YEL "\033[33m"
#define BLU "\033[34m"
#define MAG "\033[35m"
#define CYA "\033[36m"
#define WHI "\033[37m"


template<typename T, typename Container = std::deque<T>>
class MutantStack : public std::stack<T>{
private:
    
public:
    MutantStack();
    ~MutantStack();
    MutantStack(const MutantStack& s);
    MutantStack&    operator=(const MutantStack& m);

    using iterator = typename Container::iterator;
    iterator begin();
    iterator end();

    using const_iterator = typename Container::const_iterator;
    const_iterator cbegin();
    const_iterator cend();

    using reverse_iterator = typename Container::reverse_iterator;
    reverse_iterator rbegin();
    reverse_iterator rend();

    using const_reverse_iterator = typename Container::const_reverse_iterator;
    const_reverse_iterator crbegin();
    const_reverse_iterator crend();
};

#include "MutantStack.tpp"

#endif