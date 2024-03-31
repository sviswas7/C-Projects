#include <iostream>
#include "Alien.h"
#include <memory>
#include <vector>

using namespace std;


int main()

{
	enum gender {M, F};
	Alien myAlien1(100, 100, 'F');
	Alien myAlien2(100, 150, 'M');
	Alien myAlien3(100, 100, 'F');

	unique_ptr<Alien> Alien1 = make_unique<Alien>(100, 100, 'F');
	unique_ptr<Alien> Alien2 = make_unique<Alien>(100, 150, 'M');
	unique_ptr<Alien> Alien3 = make_unique<Alien>(100, 100, 'F');
	
	
		
	Alien resultAlien = myAlien1 + myAlien2;

	cout << "Alien1 != Alien2" << boolalpha << (myAlien1 != myAlien2) << endl;
	cout << "Alien1 == Alien2" << boolalpha << (myAlien1 == myAlien2) << endl;
	cout << "resultAlien height * weight: " << resultAlien.getHeight()
		<< " * " << resultAlien.getWeight() << " " << resultAlien.getGender() << endl;
		

	return 0;
}