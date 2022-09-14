#include <iostream>

#include "Vector3.h"
#include "Particle.h"

void PrintParticleInfo(const Particle& p) {
	std::cout << "Velocity: " << p.velocity.y << "\nPosition: " << p.position.y << "\n\n";
}


void VectorTest() {
	Vector3 v(2, 3, 4);
	float mag = v.Magnitude();
	std::cout << "Vector(2, 3, 4)\n";
	std::cout << "Magnitude of the vector is: " << mag << "\n";

	v.Normalize();
	std::cout << "The vector normalized is: (" <<
		v.x << ", " << v.y << ", " << v.z << ")\n";

	Vector3 invV = v.Inverse();
	std::cout << "The inverse of the normalized vector is: (" <<
		invV.x << ", " << invV.y << ", " << invV.z << ")\n";
}
void ParticleTest() {
	Particle p;
	p.position = Vector3(0.f);
	p.velocity = Vector3(0.f, 5.f, 0.f);
	p.acceleration = Vector3(0.f, -1.f, 0.f);

	while (p.position.y >= 0) {
		p.Integrate(0.1f);
		PrintParticleInfo(p);
	}
}

void BulletTest(Particle b, float wall) {

	float time = 0;
	while (b.position.y <= wall) {
		b.Integrate(1.f);
		PrintParticleInfo(b);
		time++;
	}
	std::cout << "Bullet hit the wall in: " << time << " seconds./n";
}

int main() {
	//ParticleTest();

	Particle bullet1;
	bullet1.position = Vector3(0.f);
	bullet1.velocity = Vector3(0.f, 97.2222f, 0.f);
	bullet1.acceleration = Vector3(0.f, -1.f, 0.f);

	float wall1 = 1000;

	BulletTest(bullet1, wall1);
	return 0;
}