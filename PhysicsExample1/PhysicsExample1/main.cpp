#include <iostream>

float x;
float y;
float z;

class Vector3 {
	//private

public:
	//Default Constructor
	Vector3();

	//Copy Constructor
	Vector3(const Vector3&);

	//Assignment Overload
	Vector3 operator=(const Vector3& rhs);

	//Operator + Overload
	Vector3& operator+(const Vector3& rhs);

	//Operator - Overload
	Vector3& operator-(const Vector3& rhs);

	//Destructor
	~Vector3();
	
	float m_X;
	float m_Y;
	float m_Z;
};

class Particle {
public:
	Vector3 position;
};

Vector3::Vector3() {
	std::cout << " Vector3::Vector3()\n";
	m_X = 0;
	m_Y = 0;
	m_Z = 0;
}

Vector3::Vector3(const Vector3& other)
	: m_X(0)
	, m_Y(0)
	, m_Z(0)
{
	std::cout << " Vector3::Vector3(const Vector3& other)\n";
}

Vector3 Vector3::operator=(const Vector3& rhs) {
	std::cout << " Vector3::operator=(const Vector3& rhs)\n";
	m_X = rhs.m_X;
	m_Y = rhs.m_Y;
	m_Z = rhs.m_Z;
	return *this;
}

Vector3& Vector3::operator+(const Vector3& rhs) {
	std::cout << " Vector3::operator+(const Vector3& rhs)\n";
	Vector3 newVector;
	newVector.m_X = m_X + rhs.m_X;
	newVector.m_Y = m_Y + rhs.m_Y;
	newVector.m_Z = m_Y + rhs.m_Z;
	return newVector;
}

Vector3& Vector3::operator-(const Vector3& rhs) {
	std::cout << " Vector3::operator-(const Vector3& rhs)\n";
	Vector3 newVector;
	newVector.m_X = m_X + (-1 * rhs.m_X);
	newVector.m_Y = m_Y + (-1 * rhs.m_Y);
	newVector.m_Z = m_Y + (-1 * rhs.m_Z);
	return newVector;
}

Vector3::~Vector3() {
	std::cout << " Vector3::~Vector3()\n";
}

Vector3 Multiply(Vector3 v, float a) {
	std::cout << " Multiply(Vector3 v, float a):\n";
	v.m_X *= a;
	v.m_Y *= a;
	v.m_Z *= a;
	return v;
}

void main()
{
	std::cout << "VectorA:\n";
	Vector3 vA;

	std::cout << "VectorB:\n";
	Vector3 vB;

	vA.m_X = 5;
	vA.m_Y = 2;
	vA.m_Z = 1;

	vB.m_X = 3;
	vB.m_Y = 5;
	vB.m_Z = 9;

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

	vD.m_X = 5;
	vE.m_Y = 7;

	std::cout << "VectorF:\n";
	Vector3 vF;
	vF = Multiply(vD, 3);

	std::cout << "\n-------------------------------------------------------\n";

	std::cout << "VectorG:\n";
	Vector3 vG;

	std::cout << "VectorH:\n";
	Vector3 vH;

	vG.m_X = 5;
	vG.m_Y = 2;
	vG.m_Z = 1;

	vH.m_Y = 5;
	vH.m_X = 3;
	vH.m_Z = 9;

	std::cout << "VectorI:\n";
	Vector3 vI;
	vI = vG - vH;

	int breakpoint = 5;
	std::cout << "Ending The Program!\n";
}