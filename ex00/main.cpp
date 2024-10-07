#include "easyfind.hpp"

int main(){
    std::vector<int> v = {5, -8, 1, 0, 200, -4};
    std::deque<int> d = {9, 55, 21, 12};
    std::list<int> l = {92, -32, 32};
    
    try {
        std::cout << "Vector, 200: " << easyfind(v, 200) << std::endl; // found
        std::cout << "Deque, 12: " << easyfind(d, 12) << std::endl; // found
        std::cout << "List, 92: " << easyfind(l, 92) << std::endl; // found
        std::cout << "Vector, -1: " << easyfind(v, -1) << std::endl; // not found
        std::cout << "Deque, 100: " << easyfind(d, 100) << std::endl; // not found
        std::cout << "List, 93: " << easyfind(l, 93) << std::endl; // not found
    }
    catch (std::exception &e){
        std::cerr << e.what();
    }
    return 0;
}