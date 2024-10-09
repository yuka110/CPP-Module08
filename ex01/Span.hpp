#ifndef SPAN_HPP
# define SPAN_HPP


#include <iostream>
#include <string>
#include <stdexcept>
#include <cstdlib>

#include <algorithm>
#include <vector>

#define BOLD "\033[1m"
#define RES "\033[0m"
#define RED "\033[31m"
#define GRE "\033[32m"
#define YEL "\033[33m"
#define BLU "\033[34m"
#define MAG "\033[35m"
#define CYA "\033[36m"
#define WHI "\033[37m"



class Span{
private:
    std::vector<int> vec;
    unsigned int     len;

public:
    Span();
    Span(unsigned int N);
    ~Span();
    Span(const Span& s);
    Span&           operator=(const Span& s);
    std::vector<int>   getVec(){ return vec;}
    void            addNumber(int n);
    unsigned int    shortestSpan();
    unsigned int    longestSpan();
    void            fillVector();
};


#endif