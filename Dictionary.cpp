#include "Dictionary.h"
#include <iostream>
using namespace std;

void Dictionary::addDefinition(string word, string definition)
{
	this->dictionary[word] = definition;
}
string Dictionary::getDefinition(string word) const
{
	

	auto findWord = dictionary.find(word);
	
	if(findWord != dictionary.end())
	{
		
		cout << findWord->second << endl;
		
	}
	else
	{
		cout << "NOT FOUND!" << endl;
	}

	return "";
	
}
void Dictionary::printAll() const
{
	for (auto definition : dictionary)
	{
		cout << definition.first << " = " << definition.second << endl;
	}
}