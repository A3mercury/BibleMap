#include "Bible.h"
#include <iostream>
#include <fstream>
#include <string>

Bible::Bible()
{
	std::ifstream fin(INPUT);
	if (fin)
	{
		std::string verse;

		std::getline(fin, verse);
		while (!fin.eof())
		{
			BibleVersesVector.push_back(verse);
			std::getline(fin, verse);
		}

		fin.close();
	}
	else
	{
		std::cout << "Input file not found." << std::endl;
	}
}


Bible::~Bible()
{
}
