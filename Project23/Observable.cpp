#ifndef OBSERVABLE_CPP
#define OBSERVABLE_CPP

#include <iostream>
#include <string>
#include <unordered_map>
#include "ObserverA.cpp"
#include "ObserverB.cpp"

class Observable
{
	std::string text;
	std::unordered_map<IObserver*, IObserver*> observers;
public:
	void addObserver(IObserver * observer) noexcept
	{
		observers[observer] = observer;
	}
	void setText(const std::string & text) noexcept
	{
		this->text = text;
		notify();
	}
	const std::string& getText() const noexcept
	{
		return text;
	}
	void notify()
	{
		for (auto& i : observers)
		{
			i.second->update(text);
		}
	}
};


#endif // !OBSERVABLE_CPP