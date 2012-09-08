/*
 *  _String.h
 *  Framework
 *
 *  Created by Tom Kaiser on 24.08.11.
 *  Copyright 2011 Tom Kaiser. All rights reserved.
 *
 */

#ifndef _STRING_H
#define _STRING_H

#include <iostream>
using namespace std;

// the String with the upper-cased characters
char upperCased[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
// the pointer to it
char *upperCasePointer = upperCased;

// the String with the lower-cased characters
char lowerCased[27] = "abcdefghijklmnopqrstuvwxyz";
// the pointer to it
char *lowerCasePointer = lowerCased;

/*
 stringLength()
 returns the length of a string. 
 */
int stringLength(char *String, char *lengthPointer);


/*
 searchCharacter()
 searches for a character in a string. 
 */
bool searchCharacter(char *String, char character, char *searchPointer, int stringLength);
bool searchCharacter(char *String, char character, char *searchPointer, int stringLength, int searchLength);


/*
 searchCharacters()
 searches for a character in a string and gives the number back.
 */
int searchCharacters(char *String, char character, char *searchPointer, int stringLength);
int searchCharacters(char *String, char character, char *searchPointer, int stringLength, int searchLength);


/*
 toUpperCase():
 makes small characters big. 
 */
char *toUpperCase(char *String, char *Pointer); // with a string as an argument
char *toUpperCase(const char *String, char *Pointer); // with something like "..." as an argument



#endif