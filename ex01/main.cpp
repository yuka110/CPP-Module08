#include "Span.hpp"

int main(){
    Span sp2 = Span(1000);
    Span sp = Span(5);
    Span sp3;
    try {
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        // sp.addNumber(18);
        sp2.fillVector();        
        for (int i = 0; i < 5; i++)
            std::cout << sp.getVec()[i] << " ";
        std::cout <<"-----------------" << std::endl;
        std::cout << "shortest span is " << sp.shortestSpan() << std::endl;
        std::cout << "longest span is " << sp.longestSpan() << std::endl;
        std::cout << "--------------" << std::endl;
        std::cout << "shortest span is " << sp2.shortestSpan() << std::endl;
        std::cout << "longest span is " << sp2.longestSpan() << std::endl;
        std::cout << "--------------" << std::endl;
        sp3.addNumber(3); // should cause error
    }
    catch (std::exception& e){
        std::cerr << RED << e.what() << RES << std::endl;
    }

    return 0;
}