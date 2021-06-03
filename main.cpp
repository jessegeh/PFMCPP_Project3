/*
Project 3 - Part 1e / 5
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

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct for each of your 10 types. i.e.:
*/
#if false
struct CarWash
{

};
#endif
/*
2) Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
 */

/*
 example:  

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar( Car car ); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior( Car car );
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};



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
