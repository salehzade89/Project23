#include "IObserver.cpp"
#include <string>

class ObserverB : public IObserver
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