#ifndef EASY_FIND_HPP
# define EASY_FIND_HPP

#include <iostream>
#include <string>
#include <stdexcept>

#include <algorithm>
#include <vector>
#include <deque>
#include <list>


#define BOLD "\033[1m"
#define RES "\033[0m"
#define RED "\033[31m"
#define GRE "\033[32m"
#define YEL "\033[33m"
#define BLU "\033[34m"
#define MAG "\033[35m"
#define CYA "\033[36m"
#define WHI "\033[37m"

template <typename T>
int easyfind(T t, int n){
    auto it = find (t.begin(), t.end(), n);
    if (it != t.end())
        return *it;
    else
        throw std::runtime_error( "\033[31mValue not found\n\033[0m");
    return 0;
}

#endif