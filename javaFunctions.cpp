/*
 *  javaFunctions.cpp
 *  JavaFunctionsFramework
 *
 *  Created by Tom Kaiser on 21.08.11.
 *  Copyright 2011 Tom Kaiser. All rights reserved.
 *
 */

#include "javaFunctions.h"

int main()
{
	
	return 0;
}

/*
 stringLength()
 returns the length of a string. 
 */
int stringLength(char *String, char *lengthPointer)
{
	int counter = 0;
	lengthPointer = String;
	while (*lengthPointer != '\0') // treat lengthPointer as a normal char!
	{
		lengthPointer++;
		counter++;
	}
	return ++counter; // Because of the terminating character
}


/*
 searchCharacter()
 searches for a character in a string. 
 */
bool searchCharacter(char *String, char character, char *searchPointer, int stringLength)
{
	bool found = false;
	searchPointer = String;
	for (int i = 0; i < stringLength; i++) // without determinating character
	{
		while (*searchPointer != character) // searching for the right character...
			searchPointer++;
		
		if (*searchPointer == character)
			found = true;
		
	}
	return found;
}

bool searchCharacter(char *String, char character, char *searchPointer, int stringLength, int searchLength)
{
	bool found = false;
	searchPointer = String;
	if (searchLength < (stringLength)) // stringLength without determination
	{
		for (int i = 0; i < searchLength; i++) // without determinating character
		{
			while (*searchPointer != character) // searching for the right character...
				searchPointer++;
		
			if (*searchPointer == character)
				found = true;
		}
	}
	
	else 
	{
		cerr << "In bool searchCharacter(char *String, char character, char *searchPointer, int stringLength, int searchLength):\n\t Failure no. 01: Too small searchLength." << endl;
		exit(1);
	}

	return found;
	
}


/*
 searchCharacters()
 searches for a character in a string and gives the number back.
 */
int searchCharacters(char *String, char character, char *searchPointer, int stringLength)
{
	bool found = false;
	int times = 0;
	searchPointer = String;
	for (int i = 0; i < stringLength; i++) // without determinating character
	{
		while (*searchPointer != '\0') // searching for the right character...
		{
			searchPointer++;
		
			if (*searchPointer == character)
			{
				found = true;
				times++;
			}
		}
		
	}
	if (found == true) return times;
		
	else return found;
}
int searchCharacters(char *String, char character, char *searchPointer, int stringLength, int searchLength)
{
	bool found = false;
	int times = 0;
	searchPointer = String;
	if (searchLength < stringLength)
	{
		for (int i = 0; i < stringLength; i++) // without determinating character
		{
			while (*searchPointer != '\0') // searching for the right character...
			{
				searchPointer++;
			
				if (*searchPointer == character)
				{
					found = true;
					times++;
				}
			}
		
		}
	}
	if (found == true) return times;
	
	else return found;
}


/*
toUpperCase():
makes small characters big. 
 */

/*
char *toUpperCase(char *String, char *Pointer)
{
	Pointer = String;
	
}
char *toUpperCase(const char *String, char *Pointer);
*/