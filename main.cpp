/*
Project 3 - Part 1d / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3. 
Part1 will be broken up into 5 separate steps 
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

    The goal of this step is to get you to think about breaking down an object into smaller and smaller objects, 
    until the smallest object is made of up only C++ primitives. 

    Continuing the previous example:  Cell Phone

    A Cell Phone is made up of the following 5 properties/sub-objects and 3 actions:
        Display
        Memory
        CPU
        Radio
        Applications
    3 actions:
        make a call
        send a text
        run an application.

    These 5 properties can be broken down into their own sub-objects and properties. 

    If we break down the first property 'Display' into its 5 properties we get:
        brightness
        amount of power consumed.
        pixels
        width in cm
        height in cm

    the Display's brightness can be represented with a Primitive, such as a double. 

    The amount of power consumed can also be represented with a Primitive, such as a float or integer (i.e. 250mWa)
    
    The 'pixels' property must be represented with an array of Pixel instances, as the screen has more than 1 row of pixels.
        Arrays have not been discussed and can't be used in this project.
        Instead, we can use an Integer primitive to store the Number of Pixels:

    Display:
        Number of Pixels
        Amount of Power consumed (milliwatt-hours)
        Brightness
        width in cm
        height in cm
************************

1) Fill in #5 - #9 with plain-english UDTs for the 5 properties you created for UDT #10
    example: 
        If #10's first property was 'Engine', then your `Thing 5)` will be `Engine` and 
        you will need to provide 5 properties and 3 member functions of that Engine object in plain English
*/






/*
Thing 1) Concert venue
5 properties:
    1) number of seats
    2) number of drinks
    3) number of workers
    4) amount of electricity used
    5) number of bands playing per week
3 things it can do:
    1) provide entertainment
    2) charge customer
    3) provide food and meal services
 */

/*
Thing 2) rehearsal space
5 properties:
    1) number of amps
    2) number of bands using the space per week
    3) amount of rent paid per week
    4) amount of electricity consumed
    5) number of cables
3 things it can do:
    1) provide a space for bands to rehearse
    2) provide a space for social gatherings
    3) allow bands to play louder than at their home
 */

/*
Thing 3) disc golf course
5 properties:
    1) number of players
    2) number of discs
    3) number of baskets
    4) number of holes
    5) number of spectators
3 things it can do:
    1) provide a place to compete
    2) provide a place to entertain spectators
    3) charge players per round
 */

/*
Thing 4) arcade hall
5 properties:
    1) number of arcade machines
    2) number of coin operated slot machines
    3) number of players
    4) amount of lights
    5) amount of electricity used
3 things it can do:
    1) charge players
    2) provide entertainment
    3) host tournaments
 */

/*
Thing 5) sound mixing board
5 properties:
    1) volume in dB
    2) width in cm
    3) power switch
    4) weight in kg
    5) channel selector
3 things it can do:
    1) change volume
    2) turn on/off
    3) change the channel
 */

/*
Thing 6) light mixing board
5 properties:
    1) channel selector
    2) luminosity
    3) color
    4) amount of flicker
    5) direction knob
3 things it can do:
    1) change color of light
    2) change the luminosity of light
    3) change the direction of light
 */

/*
Thing 7) bar
5 properties:
    1) bar stool
    2) bar counter
    3) fridge
    4) shelf
    5) cash register
3 things it can do:
    1) charge customers
    2) keep drinks cool
    3) keep track of how many drinks bought
 */

/*
Thing 8) PA
5 properties:
    1) volume of main unit in cm3
    2) sound volume created in dB
    3) power switch
    4) number of cables
    5) impendance in ohms
3 things it can do:
    1) create sound
    2) turn on power switch light
    3) adjust volume
 */

/*
Thing 9) seating
5 properties:
    1) height in cm
    2) material of seating
    3) area used in cm2
    4) rotating dial for seat adjustment
    5) cushion
3 things it can do:
    1) adjust poster of person sitting
    2) adjust height of seat
    3) create a place for people to watch music without standing
 */

/*
Thing 10) music venue
5 properties:
    1) sound mixing board
    2) light mixing board
    3) bar
    4) PA
    5) seating
3 things it can do:
    1) provide a place for customers to sit
    2) make sound
    3) create light
 */

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
    std::cout << "good to go!" << std::endl;
}
