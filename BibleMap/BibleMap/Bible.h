#pragma once
#include <iostream>
#include <vector>
class Bible
{
public:
	Bible();
	virtual ~Bible();

	// vector that simply holds all the verses read in from the file
	std::vector<std::string> BibleVersesVector;

private:
	const std::string INPUT = "bible(gen).txt";
};

