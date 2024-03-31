#include <iostream>
#include "Rectangle.h"
#include <fstream>
#include <vector>
using namespace std;


void populateVector(ifstream& inFile, vector<Rectangle*>& rectVector);
void printData(ofstream& outFile, vector<Rectangle*>& rectVector);
void deallocateRectangles(vector<Rectangle*>& rectVector);


int main()

{
	ifstream inFile;
	ofstream outFile;
	vector<Rectangle*> rectVector;

	inFile.open("rectangles.txt");
	outFile.open("output.txt");
	
	if (!inFile)
	{
		cout << "Error opening File.." <<endl;
		return 1;
	}

	populateVector(inFile, rectVector);
	printData(outFile, rectVector);
	deallocateRectangles(rectVector);

	
	inFile.close();
	outFile.close();
	return 0;
}

void populateVector(ifstream& inFile, vector<Rectangle*>& rectVector)
{
	Rectangle* temp;
	int length;
	int width;

	while (!inFile.eof())
	{
		inFile >> length;
		inFile >> width;
		
		temp = new Rectangle(length, width);
		rectVector.push_back(temp);
	}

}
void printData(ofstream& outFile, vector<Rectangle*>& rectVector)
{
	for (Rectangle* i : rectVector)
	{
		outFile << i->area() << i->perimeter() << endl;

	}
}
void deallocateRectangles(vector<Rectangle*>& rectVector)
{
	for (Rectangle* i : rectVector)
	{
		delete i;
	}
}

