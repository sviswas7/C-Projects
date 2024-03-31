#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
using namespace std;

void filLVector(vector<int>& myVector);
void printVector(const vector<int>& myVector);
void countFives(const vector<int>& myVector);

int main()
{
	vector<int> myVector;
	filLVector(myVector);
	printVector(myVector);

	countFives(myVector);

	cout << "Repalceing 5s with 99s" << endl;

	replace(myVector.begin(), myVector.end(), 5, 99);

	countFives(myVector);
	printVector(myVector);

	sort(myVector.begin(), myVector.end());
	printVector(myVector);

	return 0;
}

void filLVector(vector<int>& myVector)
{
	//Seed
	
	int temp;
	srand(10);
	for (int i = 0; i < 20; i++)
	{
		temp = rand() % 5 + 1;
		myVector.push_back(temp);
	}
}
void printVector(const vector<int>& myVector)
{
	for (int element : myVector)
	{
		cout << element << endl;
	}
	
}
void countFives(const vector<int>& myVector)
{
	int numFives = count(myVector.begin(), myVector.end(), 5);
	cout << "Number of Fives: " << numFives << endl;
}