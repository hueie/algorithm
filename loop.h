//
// Created by a on 5/1/2020.
//

#ifndef UNTITLED_LOOP_H
#define UNTITLED_LOOP_H


class loop {


};
#define STUDENTS 3

int main(void){
    for(int i=0; i<STUDENTS; i++){
        //printf(name:) // Said I'm just prompting the user give me the student's name.
        //students[i].name = GetString();
    }
}

#endif //UNTITLED_LOOP_H

// Here's just a for loop iterating from 0 to 3, because that's what the value of students is.
// I'm just prompting the user give me the student's name.
// And then in line 17, we have a mostly familiar line.
// We have our old friend GetString on the right.
// And what piece of syntax is apparently new, if you've never programmed in C++ before,
// and have never used the structs?
// The dot name
// But this isn't too much of a leap, because now students bracket i (student[i]) gives you the i-th student.
// And if you want to dive inside of that structure,
// you just use a single period and then the name of the variable inside,
// or the property inside that you want to get access to.

// Similarly then, if I then prompt the user, give me the student's dorm,
// you can similarly store that string in the dorm variable inside of that student structure,
// and now things get a little fancy.

// But you'll see this far more in PSet 4, so let's just glance at it now.
// It turns out that in line 23 through 38, wwhat do you think I'm perhaps doing?

// I've removed the comments for today, but the version of the code online for reference has all comments.
// What do I seem to be doing?
// Saving the file with all the information that the user entered.






