#include "VerseKey.h"
#include <iostream>
#include <string>
#include <fstream>

VerseKey::VerseKey(std::string book, int chapter, int verse) 
	: book(book), chapter(chapter), verse(verse)
{
}

VerseKey::~VerseKey()
{
}

int VerseKey::getVerse() const
{
	return verse;
}

std::ostream &operator<<(std::ostream & out, const VerseKey & Output)
{
	out << Output.getVerse() << std::endl;
	return out;
}
//std::istream &operator>>(std::istream & in, VerseKey & Input)
//{
//	std::string readline;
//	std::string book;
//	int chapter, int verse;
//
//	// get from file
//	in >> readline;
//
//
//	VerseKey newVerseKey(book, chapter, verse);
//	return in;
//
//}

std::istream &getline(std::istream & in, VerseKey & Input)
{
	std::string readline;
	std::string book;
	int chapter;
	int v;



	//VerseKey newVerseKey(book, chapter, v);
	return in;
}