#ifndef OBSERVERA_H
#define OBSERVERA_H

#include "IObserver.h"
#include <iostream>
#include <string>

class ObserverA : public IObserver
{
	std::string text;
public:
	void update(const std::string& t) noexcept override;
	const std::string& getText() const noexcept;
};

#endif // !OBSERVERA_H