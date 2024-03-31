#include <iostream>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
using namespace std;

int main()

{
	//Animal myAnimal("Chiwawa", 100);
	Dog myDog("Chuwawa", 100, "Chuchu");
	Animal* dogPtr = new Dog("Fido", 115, "Golden Retriver");
	Animal* catPtr = new Cat("Buu", 88);

	cout << "Make Noise? " << dogPtr->makeNoise() << endl;
	cout << "Eat? " << dogPtr->eat() << endl;
	cout << "Make Noise? " << catPtr->makeNoise() << endl;
	cout << "Eat? " << catPtr->eat() << endl;
	
	
	/*cout << "Animal Name: " << myAnimal.getName() << endl;
	cout << "Animal Wieght: " << myAnimal.getWeight() << endl;
	cout << "Animal noise: " << myAnimal.makeNoise() << endl;

	cout << "Dog Name: " << myDog.getName() << endl;
	cout << "Dog Wieght: " << myDog.getWeight() << endl;
	cout << "Dog breed: " << myDog.makeNoise() << endl;
	myDog.digHole();
	myDog.chaseCat();*/
	(reinterpret_cast<Cat*>(catPtr))->chaseMouse(); //More modern approach for using cast

	delete dogPtr;
	dogPtr = nullptr;
	delete catPtr;
	catPtr = nullptr;


	return 0;
}
