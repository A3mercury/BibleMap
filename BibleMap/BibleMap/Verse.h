#pragma once
#include <iostream>
class Verse
{
public:
	Verse(std::string verseText);
	virtual ~Verse();

private:
	std::string verseText;
};

