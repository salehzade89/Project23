#include "IObserver.h"
#include <iostream>
#include <string>
#include "ObserverB.h"

void ObserverB::update(const std::string& t) noexcept
{
	text = t;
	std::cout << "ObserverB text : " << text << '\n';
}
const std::string& ObserverB::getText() const noexcept
{
	return text;
}