#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "Map.hpp"
#include "VerseKey.h"
#include "Verse.h"
using namespace std;

const string INPUT = "bible(gen).txt";

void main()
{
	std::ifstream fin(INPUT);
	if (fin)
	{
		util::Map<VerseKey, Verse> BibleMap;

		std::istringstream sin; // the irony
		std::string readline;
		std::string book;
		std::string verseText;
		int chapter, verse;

		getline(fin, readline);
		while (!fin.eof())
		{
			if (readline[0] == 'B')
			{
				book = readline.substr(8);
			}
			else
			{
				sin.str(readline);
				sin >> chapter >> verse;
				verseText = readline.substr(8);
				
				// set values to new VerseKey
				VerseKey vKey(book, chapter, verse);
				Verse vText(verseText);

				BibleMap[vKey] = vText;
		
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