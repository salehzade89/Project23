#ifndef IOBSERVER_H
#define IOBSERVER_H

#include <iostream>
#include <string>

struct IObserver
{
	virtual void update(const std::string&) noexcept = 0;
};

#endif // !IOBSERVER_H