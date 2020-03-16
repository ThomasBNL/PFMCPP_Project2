#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 

 int, double, char, bool, float, void, unsigned int
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function

3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variable to ignoreUnused() as you did in variableDeclarations()
    see main() for an example of this.
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    
     //int, double, char, bool, float, void, unsigned int

    int myFirstInt = -1;
    int mySecondInt = 22000;
    int myThirdInt = -30526;

    double myFirstDouble = 1.14;
    double mySecondDouble = 155.35;
    double myThirdDouble = 33.58;

    float myFirstFloat = 8.15;
    float mySecondFloat = 17.08;
    float myThirdFloat = 160.10;

    bool myFirstBool = true;
    bool mySecondBool = false;
    bool myThirdBool = true;

    char myFirstChar = 'A';
    char mySecondChar = '%';
    char myThirdChar = '4';
    
    unsigned int myFirstUnsignedInt = 500;
    unsigned int mySecondUnsignedInt = 1061;
    unsigned int myThirdUnsignedInt = 8260;
        
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function

    ignoreUnused(myFirstInt, mySecondInt, myThirdInt, myFirstDouble,mySecondDouble, myThirdDouble, myFirstFloat, mySecondFloat,myThirdFloat, myFirstBool, mySecondBool, myThirdBool, myFirstChar, mySecondChar, myThirdChar, myFirstUnsignedInt, mySecondUnsignedInt, myThirdUnsignedInt);
}
/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */

int daysTillBirthday(int monthBirthday, int dayBirthday, int currentMonth, int currentDay, int currentYear )
{
    ignoreUnused(monthBirthday, dayBirthday, currentMonth, currentDay, currentYear);
    return{};
}

/*
 2)
 */

 float heightMetersJumped(float finalSpeed, float acceleration, int distanceRunway)
 {
    ignoreUnused(finalSpeed, acceleration, distanceRunway);
    return{};
 }

/*
 3)
 */

 bool areNumbersEqual(float number1, float number2)
 {
    ignoreUnused(number1, number2);
    return{};
 }

/*
 4)
 */

 float interestOverSavings(float savingsValue, unsigned int numberOfMonths, float interest = 2)
 {
    ignoreUnused(savingsValue, numberOfMonths, interest);
    return{};
 } 

/*
 5)
 */

void changeDifficulty(unsigned int numberOfDeaths, unsigned int level, unsigned int minutesPlayed)
{
    ignoreUnused(numberOfDeaths, level, minutesPlayed);
}

/*
 6)
 */

bool increaseGear(int currentGear, int engineRevolutions)
{
    ignoreUnused (currentGear, engineRevolutions);
    return{};
}

/*
 7)
 */

 float lowestValue(float value1, float value2, float value3)
 {
    ignoreUnused(value1,value2,value3);
    return{};
 }

/*
 8)
 */

 void setWakeUpAlarm(int currentTimeInMinutes, int desiredWakeUpTimeInMinutes, bool wakeUpNextDay)
 {
    ignoreUnused(currentTimeInMinutes, desiredWakeUpTimeInMinutes, wakeUpNextDay);
 }

/*
 9)
 */

 float mailDeliveryTime(int kilometersLeft, float averageDrivingSpeed)
 {
    ignoreUnused(kilometersLeft, averageDrivingSpeed);
    return{};
 }

/*
 10)
 */
 
 bool drinkCoffee(float coffeePrice, int minutesSinceLastCoffee, float hoursOfSleepHad)
 {
    ignoreUnused(coffeePrice, minutesSinceLastCoffee, hoursOfSleepHad);
    return{};
 }

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)

    auto daysTillThomasBirthday = daysTillBirthday( 12, 27, 14, 3, 2020);
    
    //2)

    auto heightJumped = heightMetersJumped(10.50, 1.25, 30);
    
    //3)

    auto sameValues = areNumbersEqual(15, 15);
    
    //4)

    auto interest = interestOverSavings(500, 12);
    
    //5)
    
    changeDifficulty(10, 7, 805);

    //6)

    auto switchGear = increaseGear(3, 3500);
    
    //7)

    auto minimumValue = lowestValue(610.25, 1680,15);
    
    //8)

    setWakeUpAlarm(1320, 480,1);
    
    //9)

    auto timeTillMailArrival=mailDeliveryTime(105, 2.24f); //error without the f, (implicit conversion loses floating-point precision: 'double' to 'float')
    
    //10)
    
    auto takeACoffee = drinkCoffee(2.95f, 180, 8);
    
    ignoreUnused(carRented, daysTillThomasBirthday, heightJumped, sameValues, interest, switchGear, minimumValue, timeTillMailArrival, takeACoffee);
    
    std::cout << "good to go!" << std::endl;
    return 0;    
}
