//
// Created by a on 5/1/2020.
//

#ifndef UNTITLED_STUDNET_H
#define UNTITLED_STUDNET_H


class studnet {
    string name;
    string dorm;
};


#endif //UNTITLED_STUDNET_H
// It turns out and this one's even simpler than the one involving an ID
// If you want to come up with your homemade data type,
// and in addition to int, and char and float and all these others that exist,
// you can do so by literally writing typedef struct
// then some curly braces, inside of which you list the variables you want to associate with this new custom data type,like a name and dorm
// and then after the curly braces
// you give a name to the new data type
// so for instance student

// And what's nice about this now is that if we look at the corresponding code,

// The convention, first of all, is to put this in a file called something dot h, a header file, which we haven't started using ourselves too much.
// But we're going to start using quite a bit now
// And what we can do with this, ultimately, in these few lines of code is !
// (I can) declare exactly that data type, a student, And now let's use it
// I'm going to now go into a file called structs1 dot c

//And let's take a look at a few characteristics here