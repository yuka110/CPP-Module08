#include "Span.hpp"

Span::Span() : vec(0), len(0) {}

Span::Span(unsigned int N) : len(N){
    vec.reserve(N);
}

Span::~Span(){}

Span::Span(const Span& s){
    operator=(s);
}

Span& Span::operator=(const Span& s){
    if (this == &s)
        return *this;
    this->vec = s.vec;
    this->len = s.len;
    return *this;
}

void    Span::addNumber(int n){
    if (vec.capacity() == vec.size())
        throw std::runtime_error("No more numbers can be added");
    vec.push_back(n);
}

unsigned int    Span::shortestSpan(){
    unsigned int minDis = UINT32_MAX;
    unsigned int temp;
    for (unsigned int i = 0; i < len; i++){
        for (unsigned int j = 1; i+j < len; j++){
            temp = abs(vec[i] - vec[i+j]);
            if (temp < minDis)
                minDis = temp;
        }
    }
    return (minDis);
}

unsigned int Span::longestSpan(){
    return (*std::max_element(vec.begin(), vec.end())
            - *std::min_element(vec.begin(), vec.end()));
}

void    Span::fillVector(){
    for (unsigned int i = 0; i < len; i++){
        vec.push_back(rand()% INT16_MAX + 1);
        // std::cout << vec[i] << " ";
    }
    // std::cout << "\n";
}