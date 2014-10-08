#include <iostream>
#include <string>
#include "Map.hpp"
#include "VerseKey.h"
#include "Verse.h"
#include "Bible.h"
using namespace std;

const string INPUT = "bible.txt";

void main()
{
	util::Map<int, string> BibleMap;
	Bible BibleObj;

	for (unsigned int i = 0; i < BibleObj.BibleVersesVector.size(); i++)
	{
		string bookName;
		string chapter;
		string verse;

		if (BibleObj.BibleVersesVector.at(i).substr(0, 4) == "Book")
		{
			bookName = BibleObj.BibleVersesVector.at(i).substr(8);
		}
		else
		{
			chapter = BibleObj.BibleVersesVector.at(i).substr(0, 3);
			verse = BibleObj.BibleVersesVector.at(i).substr(4, 3);
		}
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