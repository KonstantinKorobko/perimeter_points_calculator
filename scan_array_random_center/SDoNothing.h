#pragma once
#include "MyClass.h"
class SDoNothing :
    public IMyClass
{
public:
	SDoNothing();
	~SDoNothing();

	virtual void init() override;
	virtual void update() override;
	virtual void destroy() override;

	virtual void setFloat(float data_0) override;
	virtual void getData(int degrees) override;
};

