#include <iostream>
#include <string>
#include "Observable.h"

int main()
{
	Observable observable;

	ObserverA observerA1;

	observable.addObserver(&observerA1);

	observable.setText("Hello");

	system("pause");
	return 0;
}