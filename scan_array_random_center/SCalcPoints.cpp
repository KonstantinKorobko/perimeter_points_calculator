#include "SCalcPoints.h"

SCalcPoints::SCalcPoints()
{
	status = POINT_POSITIONS;
	storage = nullptr;
	radius = 50.0;
}

SCalcPoints::~SCalcPoints()
{
	destroy();
}

void SCalcPoints::init()
{
	storage = new float* [ROUNDDEG];
	for (int i = 0; i < ROUNDDEG; i++)
	{
		storage[i] = new float[2] { 0 };
	}
	for (int i = 0; i < ROUNDDEG; i++)
	{
		storage[i][0] = cos(deg2rad(float(i))) * radius;
		storage[i][1] = sin(deg2rad(float(i))) * radius;
	}
}
void SCalcPoints::update()
{
	//change status code if need
}
void SCalcPoints::destroy()
{
	for (int i = 0; i < ROUNDDEG; i++)
	{
		delete[] storage[i];
	}
	delete[] storage;
	storage = nullptr;
}

void SCalcPoints::setFloat(float data_0)
{
	radius = data_0;
}
void SCalcPoints::getData(int degrees)
{
	std::cout << "angle = " << degrees << "	point position = (" << storage[degrees][0] << ", " << storage[degrees][1] << ")" << std::endl;
	std::cout << std::endl;
}
float SCalcPoints::deg2rad(float deg)
{
	return 2.0 * 3.1415926535 * (deg / 360.0);
}
