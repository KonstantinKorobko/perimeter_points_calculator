#pragma once
#include "MyClass.h"
class SCalcPoints :
    public IMyClass
{
public:
	SCalcPoints();
	~SCalcPoints();

	virtual void init() override;
	virtual void update() override;
	virtual void destroy() override;

	virtual void setFloat(float data_0) override;
	virtual void getData(int degrees) override;
private:
	const int ROUNDDEG = 360;
	float radius = 20.0;
	float** storage;

	float deg2rad(float deg);
};

