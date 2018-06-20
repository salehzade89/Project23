#ifndef OBSERVERA_CPP
#define OBSERVERA_CPP

#include "IObserver.cpp"
#include <iostream>
#include <string>


class ObserverA : public IObserver
{
	std::string text;
public:
	void update(const std::string& t) noexcept override
	{
		text = t;
		std::cout << "ObserverA text : " << text << '\n';
	}
	const std::string& getText() const noexcept
	{
		return text;
	}
};

#endif // !OBSERVERA_CPP