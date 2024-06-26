#ifndef DOG_H
#define DOG_H

#include "Animal.h"
#include <string>
using namespace std;

class Dog : public Animal
{
public:
	Dog(string name, double weight, string breed);
	string getBreed() const;
	void digHole();
	string makeNoise() const;
	void chaseCat() const;
	string eat() const;
private:
	string breed;
};

#endif
