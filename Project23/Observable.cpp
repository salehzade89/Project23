#include <iostream>
#include <string>
#include <unordered_map>
#include "ObserverA.h"
#include "ObserverB.h"
#include "Observable.h"

void Observable::addObserver(IObserver * observer) noexcept
{
	observers[observer] = observer;
}
void Observable::setText(const std::string & text) noexcept
{
	this->text = text;
	notify();
}
const std::string& Observable::getText() const noexcept
{
	return text;
}
void Observable::notify()
{
	for (auto& i : observers)
	{
		i.second->update(text);
	}
}