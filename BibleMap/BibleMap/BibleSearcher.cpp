#include <iostream>
#include <string>
#include <fstream>
#include "Map.hpp"
#include "VerseKey.h"
#include "Verse.h"
using namespace std;

const string INPUT = "bible(gen).txt";

void main()
{
	util::Map<int, string> BibleMap;

	std::ifstream fin(INPUT);
	if (fin)
	{
		std::string readline;
		std::string book;
		int chapter, verse;

		getline(fin, readline);
		while (!fin.eof())
		{
			if (readline.substr(0, 4) == "Book")
			{
				book = readline.substr(8);
			}
			else
			{

			}


			getline(fin, readline);
		}

		fin.close();
	}
	else
	{
		std::cout << "Input file not found." << std::endl;
	}

	/*map[1] = "one";
	map[2] = "two";
	map[3] = "three";
	map[4] = "four";
	map[5] = "five";

	try
	{
		string thisString = map[10];
		cout << thisString << endl;
	}
	catch (std::range_error exception)
	{
		cout << "Exception Occured: " << exception.what() << endl;
	}*/
		

}