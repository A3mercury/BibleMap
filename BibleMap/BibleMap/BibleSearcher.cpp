#include <iostream>
#include <string>
#include "Map.hpp"
#include "VerseKey.h"
#include "Verse.h"
using namespace std;

void main()
{
	util::Map<int, string> map;
	//map["test"] = 4;

	//// this assignment does test the type cast operator
	//// if you debug into this lineyou will get to the typecast code
	//int i = map["test"];

	map[1] = "one";
	map[2] = "two";
	map[3] = "three";
	map[4] = "four";
	map[5] = "five";


	for (unsigned int i = 0; i < map.size(); i++)
	{
		string test = map[i];
		cout << test << endl;
	}
}