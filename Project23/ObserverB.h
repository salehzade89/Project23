#ifndef OBSERVERB_H
#define OBSERVERB_H

#include "IObserver.h"
#include <iostream>
#include <string>

class ObserverB : public IObserver
{
	std::string text;
public:
	void update(const std::string& t) noexcept override;
	const std::string& getText() const noexcept;
};

#endif // !OBSERVERB_H