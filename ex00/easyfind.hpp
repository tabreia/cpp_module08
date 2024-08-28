#include <exception>
#include <algorithm>

class NotFoundException : public std::exception
{
    public:

    const char *what() const throw()
    {
        return "Value not found in container";
    }
};

template <typename T>
typename T::iterator easyfind(T &container, int num)
{
    typename T::iterator it;

    it = std::find(container.begin(), container.end(), num);
    if (it == container.end())
    {
        throw NotFoundException();
    }
    return it;
}