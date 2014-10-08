#pragma once
#include <iostream>
class Verse
{
public:
	Verse(std::string book, int chapter, int verse, std::string verseText);
	virtual ~Verse();

private:
	std::string book;
	int chapter;
	int verse;
	std::string verseText;
};

