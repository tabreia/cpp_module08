#include "MutantStack.hpp"

int main(void)
{
	MutantStack<int> mstack;

	mstack.push(2);
	mstack.push(35);
	mstack.push(8);
	mstack.push(7);
	mstack.push(496);
	mstack.push(0);

	std::cout << "Top number: " << mstack.top() << std::endl;
	std::cout << "Stack size: " << mstack.size() << std::endl;

	MutantStack<int>::iterator itBegin = mstack.begin();
	MutantStack<int>::iterator itLast = mstack.end();

	while (itBegin != itLast)
	{
		std::cout << *itBegin << std::endl;
		++itBegin;
	}
	return (0);
}