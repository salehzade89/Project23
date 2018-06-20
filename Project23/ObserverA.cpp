#ifndef OBSERVERA_CPP
#define OBSERVERA_CPP

#include "IObserver.cpp"
#include <string>

class ObserverA : public IObserver
{
	std::string text;
public:
	void update(std::string& t) noexcept override
	{
		text = t;
	}
	const std::string getText() const noexcept
	{
		return text;
	}
};

#endif // !OBSERVERA_CPP