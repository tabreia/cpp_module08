#include <iostream>
#include "easyfind.hpp"
#include <list>
#include <vector>

int main() 
{
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    try
    {
        std::vector<int>::iterator it = easyfind(vec, 3);
        std::cout << "Found value: " << *it << " at position: " << std::distance(vec.begin(), it) << std::endl;
    } 
    catch (const NotFoundException& e) 
    {
        std::cerr << e.what() << std::endl;
    }

    try 
    {
        std::vector<int>::iterator it = easyfind(vec, 6);
        std::cout << "Found value: " << *it << " at position: " << std::distance(vec.begin(), it) << std::endl;
    } 
    catch (const NotFoundException& e) 
    {
        std::cerr << e.what() << std::endl;
    }

    std::list<int> lst;
    lst.push_back(10);
    lst.push_back(20);
    lst.push_back(30);
    lst.push_back(40);
    lst.push_back(50);

    try 
    {
        std::list<int>::iterator it = easyfind(lst, 30);
        std::cout << "Found value: " << *it << " at position: " << std::distance(lst.begin(), it) << std::endl;
    } 
    catch (const NotFoundException& e) 
    {
        std::cerr << e.what() << std::endl;
    }

    try 
    {
        std::list<int>::iterator it = easyfind(lst, 60);
        std::cout << "Found value: " << *it << " at position: " << std::distance(lst.begin(), it) << std::endl;
    } 
    catch (const NotFoundException& e) 
    {
        std::cerr << e.what() << std::endl;
    }

    std::vector<int> emptyVec;
    try 
    {
        std::vector<int>::iterator it = easyfind(emptyVec, 1);
        std::cout << "Found value in empty vector: " << *it << std::endl;
    } 
    catch (const NotFoundException& e) 
    {
        std::cerr << e.what() << std::endl;
    }

    std::list<int> singleElementList;
    singleElementList.push_back(42);
    try 
    {
        std::list<int>::iterator it = easyfind(singleElementList, 42);
        std::cout << "Found value: " << *it << " in single element list" << std::endl;
    } 
    catch (const NotFoundException& e) 
    {
        std::cerr << e.what() << std::endl;
    }

    try 
    {
        std::list<int>::iterator it = easyfind(singleElementList, 99);
        std::cout << "Found value: " << *it << " in single element list" << std::endl;
    } 
    catch (const NotFoundException& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}