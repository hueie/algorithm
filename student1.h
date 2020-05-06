
//And let's take a look at a few characteristics here

// So the stuff up here is mostly familiar, and
#include <cstdio>
#include <cscring>

//we'll come back to what is not familiar in just a moment.
#include "studnet.h"
//This of course is including my own header file, which is new as well
// except for PSet 3 where, recall, we have helpers.h
// So you might recall sharp(#) include helpers dot(.) h
// Why though am I using quotes instead of angled brackets?
// When do I choose between them?
// Almost always I seem to use angled brackets
// And then, all of a sudden on line six I'm using double quotes
// Why might that be?

// Yeah, That's in my actual IDE
// let's not dwell on the IDE, because that's just a tool that i'm using.
// That's in my current directory, specifically.

// So structs dot h is my own file not installed in the IDE, in the operating system itself,
// rather it's in my current directory.

// So the convention is if you want to include your own header file,
// you just use double quotes

// What do we call this thing in line 8, generally speaking?
// That is what?
// sharp(#) define something
// This represents constants, right?
// If you want to have a value in your program
// That you use a whole bunch of times, it's good convention to factor it out,
// declare it, with the hash symbol define, then, by convention, in all uppercase word
// though it's not strictly necessary, but it's human convention to capitalize constants
// so that they jump out at you visually space and then the value you want to be equivalent to that constant's name.
// No semicolon, but you simply follow that pattern there.
// So what am I doing in this actual code.
// So let's take a look at the main program here. in line 12
// because I have included structs dot h
// I now have magically at my disposal a new data type.

// I don't just have access to int, and char, and float and string.
// and blue (line) and others
// I now have access to a student data type.
// So in line 12, I'm combining two ideas - one a custom data type and two, using an array.
// And so in this program if I want to actually support three different students in my program,
// I can simply say give me a variable called students, each of which is of type students, which is my custom data type.
// And specifically, give me three of those in my array.
// So now what do we do in this program?









