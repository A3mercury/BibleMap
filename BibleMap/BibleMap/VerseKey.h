#pragma once
#include <iostream>
#include <fstream>
class VerseKey
{
public:
	VerseKey(std::string book, int chapter, int verse);
	virtual ~VerseKey();
	bool operator==(const VerseKey& rValue) const;

	int getVerse() const;

private:
	std::string book;
	int chapter;
	int verse;
};

std::ostream &operator<<(std::ostream&, const VerseKey& Output);
std::istream &operator>>(std::istream&, VerseKey& Input);

