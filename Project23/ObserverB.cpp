#ifndef OBSERVERB_CPP
#define OBSERVERB_CPP

#include "IObserver.cpp"
#include <iostream>
#include <string>

class ObserverB : public IObserver
{
	std::string text;
public:
	void update(const std::string& t) noexcept override
	{
		text = t;
		std::cout << "ObserverB text : " << text << '\n';
	}
	const std::string& getText() const noexcept
	{
		return text;
	}
};

#endif // !OBSERVERB_CPP