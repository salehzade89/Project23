#ifndef IOBSERVER_CPP
#define IOBSERVER_CPP

#include <iostream>
#include <string>

struct IObserver
{
	virtual void update(std::string&) noexcept = 0;
};

#endif // !IOBSERVER_CPP