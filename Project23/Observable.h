#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include <iostream>
#include <string>
#include <unordered_map>
#include "ObserverA.h"
#include "ObserverB.h"

class Observable
{
	std::string text;
	std::unordered_map<IObserver*, IObserver*> observers;
public:
	void addObserver(IObserver * observer) noexcept;
	void setText(const std::string & text) noexcept;
	const std::string& getText() const noexcept;
	void notify();
};

#endif // !OBSERVABLE_H