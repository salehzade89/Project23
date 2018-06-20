#include "IObserver.h"
#include <iostream>
#include <string>
#include "ObserverA.h"

void ObserverA::update(const std::string& t) noexcept
{
	text = t;
	std::cout << "ObserverA text : " << text << '\n';
}
const std::string& ObserverA::getText() const noexcept
{
	return text;
}