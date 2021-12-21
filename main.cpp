#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: piston
//  action 1: piston releases
piston.release();
//  action 2: piston retracts
piston.retract();
//  action 3: piston prepares to fire
piston.prepareToFire();

//  2)
//  Noun: microphone
//  action 1: microphone listens for audio
microphone.listenAudio();
//  action 2: microphone gets phantom power
microphone.phantomPower();

//  action 3: microphone coverts audio
microphone.convertAudio();

//  3)
//  Noun: pizza
//  action 1: pizza is made
pizza.make();

//  action 2: pizza gets toppings
pizza.getToppings();

//  action 3: pizza gets cooked
pizza.cook();

//  4)
//  Noun: trash can
//  action 1: trash can filled with trash
trashCan.fill();
//  action 2: trash can is empty
trashCan.empty();

//  action 3: trash can is put on curb
trashCan.putOnCurb();

//  5)
//  Noun: school
//  action 1: school hires teachers
school.hireTeacher();
//  action 2: school buys chairs
school.buyChair();

//  action 3: school gives knowdlege
school.givesKnowledge();

//  6)
//  Noun: Waiter
//  action 1: waiter serves a table
waiter.servesTable();

//  action 2: waiter gets orders
waiter.getOrder();

//  action 3: waiter gives the bill
waiter.giveBill();

//  7)
//  Noun: a Big corporation 
//  action 1:  a Big corporation codes
bigCorporation.code();

//  action 2:  a Big corporation fails
bigCorporation.fail();

//  action 3:  a Big corporation studies
bigCorporation.study();

//  8)
//  Noun: football player
//  action 1: a football player works out
footballPlayer.workout();
//  action 2: a football player eats
footballPlayer.eat();
//  action 3: a football player plays football
footballPlayer.playsFootball();

//  9)
//  Noun: audio signal
//  action 1: audio signal gets louder
audioSignal.getsLouder();

//  action 2: auido signal gets quieter
audioSignal.getsQuieter();

//  action 3: audio signal takes more power
audioSignal.takesPower();

//  10)
//  Noun: hard drive
//  action 1: hard drive stores data
hardDrive.storeData();

//  action 2: hard drive deletes data
hardDrive.deleteData();

//  action 3: hard drive sends data to user
hardDrive.sendData();



#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
