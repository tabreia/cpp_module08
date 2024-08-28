#pragma once

#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <unistd.h>

class Span
{
    private:
        size_t  size;
        std::vector<int> vector;
    public:
        Span();
        Span(size_t num);
        ~Span();

        //Required functions
        void    addNumber(int number);
        int     shortestSpan(void) const;
        int     longestSpan(void) const;

        //Test functions
        void    fill(void);

        //Exceptions
        class VectorIsFull : public std::exception
        {
            public:
                char const * what() const throw()
                {
                    return("Vector is already full");
                }
        };

        class VectorIsEmpty : public std::exception
        {
            public:
                char const * what() const throw()
                {
                    return("Vector is empty");
                }
        };

        class VectorLenghtIsOne : public std::exception
        {
            public:
                char const * what() const throw()
                {
                    return("Vector lenght is one");
                }
        };
};