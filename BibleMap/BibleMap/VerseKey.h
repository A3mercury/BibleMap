#pragma once
#include <iostream>
#include <fstream>
class VerseKey
{
public:
	VerseKey();
	VerseKey(std::string book, int chapter, int verse);
	virtual ~VerseKey();

	int getVerse() const;

private:
	std::string book;
	int chapter;
	int verse;
};

std::ostream &operator<<(std::ostream&, const VerseKey& Output);
std::istream &operator>>(std::istream&, VerseKey& Input);
std::istream &getline(std::istream &, VerseKey & Input);


