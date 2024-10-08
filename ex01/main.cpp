#include "Span.hpp"

int main(){
    Span sp = Span(5);
    Span sp2;
    try {
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        // sp.addNumber(18);
        std::cout << "shortest span is " << sp.shortestSpan() << std::endl;
        std::cout << "longest span is " << sp.longestSpan() << std::endl;
        sp2.addNumber(3); // should cause error
    }
    catch (std::exception& e){
        std::cerr << RED << e.what() << RES << std::endl;
    }

    return 0;
}