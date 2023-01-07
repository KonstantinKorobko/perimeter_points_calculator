//This code calculaate perimeter point coordinates with degree angle
//parameter radius is hardcoded. If need, can moove at ui with state initialize stage
//Author: Konstantin Korobko.

#include "MyClass.h"

int main()
{
	int statusC = 1;
	int degreeUser = 0;
	MyClass objMyClass;
	objMyClass.init();

	while ((statusC > 0) && (statusC < 3))
	{
		std::cout << "please enter:" << std::endl;
		std::cout << "1: do nothing" << std::endl;
		std::cout << "2: get point position" << std::endl;
		std::cout << "3: exit" << std::endl;
		std::cout << std::endl;
		std::cin >> statusC;
		std::cout << std::endl;

		if (statusC == 2)
		{
			std::cout << "please enter degrees: 0 - 360" << std::endl;
			std::cout << std::endl;
			std::cin >> degreeUser;
			std::cout << std::endl;

			if ((degreeUser < 0) || (degreeUser >= 360))
			{
				degreeUser = 0;
			}

			objMyClass.getPosition(degreeUser);
			degreeUser = 0;
		}
	}
}

