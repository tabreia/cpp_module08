#include "Span.hpp"

int main(void)
{
	Span sp = Span(5);

	try
	{
		sp.addNumber(0);
		sp.addNumber(8);
		sp.addNumber(57);
		sp.addNumber(4);
		sp.addNumber(51);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}