#include "MyClass.h"
#include "SDoNothing.h"
#include "SCalcPoints.h"

MyClass::MyClass()
{
	ptrIMyClass = nullptr;
}
MyClass::~MyClass()
{
	destroy();
}

void MyClass::init()
{
	ptrIMyClass = new SDoNothing;
	ptrIMyClass->init();
}
void MyClass::update()
{
	ptrIMyClass->update();
}
void MyClass::destroy()
{
	delete ptrIMyClass;
}

void MyClass::getPosition(int degrees)
{
	if (ptrIMyClass->getStatus() == 1)
	{
		ptrIMyClass->getData(degrees);
	}
	else
	{
		delete ptrIMyClass;
		ptrIMyClass = new SCalcPoints;
		ptrIMyClass->init();
		ptrIMyClass->getData(degrees);
	}
}
int IMyClass::getStatus()
{
	return status;
}
