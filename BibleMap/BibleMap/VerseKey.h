#pragma once
#include <iostream>
class VerseKey
{
public:
	VerseKey(std::string book, int chapter, int verse);
	virtual ~VerseKey();
	

private:
	std::string book;
	int chapter;
	int verse;
};

