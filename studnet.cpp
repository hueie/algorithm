//
// Created by a on 5/1/2020.
//

#include "studnet.h" // Said: I need to go back and put up "student dot h"
#include <stdio.h>// Said: MaybeI'm going to need standard io dot h

typedef struct { //struct student if I want to represent a student
    // I might have for instance
    string name; // Said: a string called name for that student
    string dorm; // Said: a string called dorm for that student
    int id; // Said: maybe an int called ID for that student

    // I can do something with these variables


} student;

int main (void){ // Said: int main void
    // And we're just going to write that as a comment in pseudo code, becuase it's not insteresting what we do for now.




    sting names[3];// just having to called string names and maybe give us three of those
    string dorms[3]; // and then maybe we have string dorms and have three of those, or with a constant,
    int ids[3]; //int ids with a constant

    //We're talking about students and yet I'm really dwelling on the low level implementation details.
    //The student is a name and a dorm and ID.
    // Why can't I just declare a variable
    student s;
    // called student and call it s.
    studnet t;
    // And if I want another student, why don't I just call it t

    //Or if I want a whole bunch of students, why don't I just say
    // I have a whole class of students, and it's three of them./those
    student clas[3];
    // In other words, why can't I come up with my own data type, called Students,
    // inside of which is a name, is an ID, is a dorm, is any number of other fields.
    // And it turns out you can do exactly that.

    // So C/C++ has this feature called struct
    // That's a language feature that allows us to do exactly this.
    // I'm going to go ahead
    // and open up structs dot h where we're going to see the following definition of a student.
}

//So let me preemptively do those
//and I'm going to call this student dot c plus plus for now
// and save this.


// To wrap up,
//OK, so this is a program that somehow stores a student
//What do I want to do if I want to store two students?
// So my first instinct is going to be all right, wait a minute
//if I have another stuudent why don't I just do string name 2,
// And we've done gone down this road before
// and what was our solution to what seems to be kind of hackish copy paste job here.

//You have to sort of arbitrarily start naming all of these variables
// you have to keep track that
// name two corresponds with dorm2 corresponds with id2.




//An array
// Right this very quickly becomes unwieldy

