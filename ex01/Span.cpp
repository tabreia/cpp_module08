#include "Span.hpp"

Span::Span() :size(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Span::Span(size_t num) : size(num)
{
    std::cout << "Constructor with numbers parameter called" << std::endl;
}

Span::~Span()
{
    std::cout << "Destructor called" << std::endl;
}

 void Span::addNumber(int number)
{
    if (vector.size() == size)
        throw   Span::VectorIsFull();
    vector.push_back(number);
}

int Span::shortestSpan(void) const
{
    if(vector.empty())
        throw Span::VectorIsEmpty();
    else if (vector.size() == 1)
        throw Span::VectorLenghtIsOne();
    std::vector<int>copy = vector;
    std::sort(copy.begin(), copy.end(), std::less<int>());
    return *(copy.begin());
}

int Span::longestSpan(void) const
{
    if (vector.empty())
        throw Span::VectorIsEmpty();
    else if (vector.size() == 1)
        throw Span::VectorLenghtIsOne();
    std::vector<int>copy = vector;
    std::sort(copy.begin(), copy.end(), std::greater<int>());
    return *(copy.begin());
}

static int  randomInt(size_t size)
{
    int i;

    srand((unsigned)time(0));
    i = (rand() % size) + 1;
    return(i);
}

void Span::fill(void)
{
    size_t start = vector.size();
    while (start < size)
    {
        usleep(50);
        vector.push_back(randomInt(size));
        start++;
    }
}
