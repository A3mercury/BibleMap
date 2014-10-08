#include "Verse.h"

Verse::Verse(std::string book, int chapter, int verse, std::string verseText) 
	: book(book), chapter(chapter), verse(verse), verseText(verseText)
{
}

Verse::~Verse()
{
}
