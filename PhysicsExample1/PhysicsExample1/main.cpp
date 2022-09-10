#include <iostream>

#include "Vector3.h"

class Particle {
public:
	Vector3 position;
};

void main()
{
	std::cout << "VectorA:\n";
	Vector3 vA;

	std::cout << "VectorB:\n";
	Vector3 vB;

	vA.x = 5.f;
	vA.y = 2.f;
	vA.z = 1.f;

	vB.x = 3.f;
	vB.y = 5.f;
	vB.z = 9.f;

	std::cout << "VectorA = VectorB:\n";
	vA = vB;

	std::cout << "VectorC:\n";
	Vector3 vC;

	std::cout << "VectorC = VectorA + VectorB:\n";
	vC = vA + vB;

	std::cout << "\n-------------------------------------------------------\n";

	std::cout << "VectorD:\n";
	Vector3 vD;

	std::cout << "VectorE:\n";
	Vector3& vE = vD;

	vD.x = 5.f;
	vE.y = 7.f;

	std::cout << "VectorF:\n";
	Vector3 vF;
	vF = vD * 3.f;

	std::cout << "\n-------------------------------------------------------\n";

	std::cout << "VectorG:\n";
	Vector3 vG;

	std::cout << "VectorH:\n";
	Vector3 vH;

	vG.x = 5.0f;
	vG.y = 2.0f;
	vG.z = 1.0f;

	vH.x = 5.0f;
	vH.y = 3.0f;
	vH.z = 9.0f;

	std::cout << "VectorI:\n";
	Vector3 vI;
	vI = vG - vH;

	int breakpoint = 5;
	std::cout << "Ending The Program!\n";
}