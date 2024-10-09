#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP


#include <iostream>
#include <string>
#include <stdexcept>
#include <cstdlib>

#include <algorithm>
#include <stack>

#define BOLD "\033[1m"
#define RES "\033[0m"
#define RED "\033[31m"
#define GRE "\033[32m"
#define YEL "\033[33m"
#define BLU "\033[34m"
#define MAG "\033[35m"
#define CYA "\033[36m"
#define WHI "\033[37m"



class MutantStack : public std::{
private:
    std::stack<int> stack;

public:
    MutantStack();
    MutantStack(unsigned int N);
    ~MutantStack();
    MutantStack(const MutantStack& s);
    MutantStack&    operator=(const MutantStack& m);

};


#endif