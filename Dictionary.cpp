#include <iostream>
#include "Dictionary.h"
using namespace std;

void printMainMenu();
void addData(Dictionary& dict, string word, string definition);
void printAll(Dictionary& dict);

int main()

{
	Dictionary dict;
	int userInput;
	string word;
	string definition;

	printMainMenu();
	cin >> userInput;
	cin.get();

	while (userInput!= 0)
	{
		

		if (userInput == 1)
		{
			cout << "Enter a Word" << endl;
			getline(cin,word);
			cout << "Enter a definition " << endl;
			getline(cin,definition);
			addData(dict, word, definition);
		}
		else if (userInput == 2)
		{
			printAll(dict);
		}
		else if (userInput == 3)
		{
			getline(cin,word);
			dict.getDefinition(word);
			
		}
		else
		{
			break;
		}

		// Next round
		printMainMenu();
		cin >> userInput;
		cin.get();
	}
	
	return 0;
}

void printMainMenu()
{
		cout << "\tWhat would you like to do?" << endl;
		cout << "\t1 = A word and definition" << endl;
		cout << "\t2 = Print All definitions" << endl;
		cout << "\t3 = Get a definition for a word" << endl;
		cout << "\t0 = To exit" << endl;
	
}

void addData(Dictionary& dict, string word, string definition)
{
	
		dict.addDefinition(word, definition);
}

void printAll(Dictionary& dict)
{
	dict.printAll();

}
