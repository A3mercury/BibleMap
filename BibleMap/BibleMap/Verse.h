#pragma once
#include <iostream>
class Verse
{
public:
	Verse(std::string book, int chapter, int verse, std::string verseText);
	virtual ~Verse();
	Verse* operator<<(const std::string outputVerse);
	Verse* operator>>(const std::string inputVerse);

private:
	std::string book;
	int chapter;
	int verse;
	std::string verseText;
};

