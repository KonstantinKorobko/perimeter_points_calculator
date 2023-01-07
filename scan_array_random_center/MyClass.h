#pragma once
#include <iostream>

enum Status
{
	DO_NOTHING,
	POINT_POSITIONS
};

class IMyClass
{
public:
	virtual ~IMyClass() {};
	virtual void init() = 0;
	virtual void update() = 0;

	virtual void setFloat(float data_0) = 0;
	virtual void getData(int degrees) = 0;
	virtual int getStatus();

protected:
	int status = DO_NOTHING;
	virtual void destroy() = 0;
};

class MyClass
{
public:
	MyClass();
	~MyClass();

	void init();
	void update();

	void getPosition(int degrees);

private:
	IMyClass* ptrIMyClass;
	void destroy();
};

