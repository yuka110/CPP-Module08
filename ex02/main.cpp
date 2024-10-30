#include "MutantStack.hpp"
#include <list>

int main()
{
    std::cout << MAG << "-------------MUTANT STACK---------------" << RES << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    std::cout << *it << std::endl;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::cout << MAG << "----------------COPY--------------------" << RES << std::endl;
    std::stack<int> s(mstack);
    MutantStack<int>::iterator it_copy = mstack.begin();
    MutantStack<int>::iterator ite_copy = mstack.end();
    while (it_copy != ite_copy)
    {
        std::cout << *it_copy << std::endl;
        ++it_copy;
    }

    std::cout << MAG << "----------------LIST--------------------" << RES << std::endl;
    std::list<int> list;
    list.push_back(5);
    list.push_back(17);
    std::cout << list.back() << std::endl;
    list.pop_back();
    std::cout << list.size() << std::endl;
    list.push_back(3);
    list.push_back(5);
    list.push_back(737);
    list.push_back(0);
    std::list<int>::iterator it2 = list.begin();
    std::list<int>::iterator ite2 = list.end();
    ++it2;
    std::cout << *it2 << std::endl;
    --it2;
    while (it2 != ite2)
    {
    std::cout << *it2 << std::endl;
    ++it2;
    }
    // std::stack<int> s(mstack);
    return 0;
}