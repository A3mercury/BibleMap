#pragma once
#include <iostream>
class VerseKey
{
public:
	VerseKey();
	virtual ~VerseKey();


private:
	std::string book;
	int chapter;
	int verse;
};

