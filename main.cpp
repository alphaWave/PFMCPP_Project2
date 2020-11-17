#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 

// Checking several sources, there are a couple of types who appear in some lists and not in others (e.g. short, size_t, long, all unsigned types). However, there is a consensus on some basic types, which are the following:

 int
 float
 double
 bool
 char
 void
 


  
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) write out 10 functions
    a) each declaration should have a random number of parameters in the function parameter list.
        When naming your parameters, choose names that are relevant to the task implied by the function's name.
    b) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    c) pass each of your function parameters to the ignoreUnused function like you did in 2b)
    d) if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
 6) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    int age = 89;
    int count = 6;
    
    float pi = 3.145f;
    float width = 2.7f;
    float speed = 122.2f;
    
    double e = 2.718281828;
    double weightOfFruit = 0.68;
    double SPL = -5.923;

    bool hasAntennae = true;
    bool isBlack = true;
    bool isEmpty = false;
    
    char firstLetter = 'A';
    char grade = 'C';
    char superHeroStartsWith = 'S';
        
    ignoreUnused(number); //passing each variable declared to the ignoreUnused() function
    ignoreUnused(age);
    ignoreUnused(count);
    
    ignoreUnused(pi);
    ignoreUnused(width);
    ignoreUnused(speed);
    
    ignoreUnused(e);
    ignoreUnused(weightOfFruit);
    ignoreUnused(SPL);

    ignoreUnused(hasAntennae);
    ignoreUnused(isBlack);
    ignoreUnused(isEmpty);

    ignoreUnused(firstLetter);
    ignoreUnused(grade);
    ignoreUnused(superHeroStartsWith);
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
 int calculateSumOfThreeInts(int number1, int number2, int number3 = 0)
 {
     ignoreUnused(number1, number2, number3);
     return {};
 }

/*
 2)
 */
 void printCharacter(char charToPrint)
 {
     ignoreUnused(charToPrint);
 }

/*
 3)
 */
 bool initAudioEngine(float sampleRateInkHz = 44.1f, int quantizationSteps = 16)
 {
     ignoreUnused(sampleRateInkHz, quantizationSteps);
     return {};
 }

/*
 4)
 */
 double returnArrayOfRandomNumbers(int sizeOfArray)
 {
     ignoreUnused(sizeOfArray);
     return {};
 }

/*
 5)
 */
 float returnSwissGradePointAverage(int studentID, int semester, char subject)
 {
     ignoreUnused(studentID, semester, subject);
     return {};
 }

/*
 6)
 */
double convertFahrenheitToCelsius(double degreesFarenheit)
{
    ignoreUnused(degreesFarenheit);
    return {};
}
/*
 7)
 */
bool deployParachute(bool isAuxiliaryChute = false)
{
    ignoreUnused(isAuxiliaryChute);
    return {};
}

/*
 8)
 */
void displayRGBColor(int red = 0, int green = 0, int blue = 0)
{
    ignoreUnused(red, green, blue);
}

/*
 9)
 */
int roundToNearestInt(double valueToRound)
{
    ignoreUnused(valueToRound);
    return {};
}

/*
 10)
 */
char returnCharacter(int numberInAlphabet)
{
    ignoreUnused(numberInAlphabet);
    return {};
}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto sumOfThree = calculateSumOfThreeInts(1, 2, 999);
    
    //2)
    printCharacter('a');

    //3)
    auto audioEngine48kHz = initAudioEngine(48);

    //4)
    auto arrOfSize10 = returnArrayOfRandomNumbers(10);

    //5)
    auto gpaOfSomebody = returnSwissGradePointAverage(629, 4, 'E');

    //6)
    auto celsiusOf100Fahrenheit = convertFahrenheitToCelsius(100);

    //7)
    auto auxChuteDeploy = deployParachute(true);

    //8)
    displayRGBColor(255, 255, 0);
    
    //9)
    auto mostLikelyNine = roundToNearestInt(9.391234);

    //10)
    auto aCharacter = returnCharacter(23);
    
    ignoreUnused(carRented);
    ignoreUnused(sumOfThree);
    ignoreUnused(audioEngine48kHz);
    ignoreUnused(arrOfSize10);
    ignoreUnused(gpaOfSomebody);
    ignoreUnused(celsiusOf100Fahrenheit);
    ignoreUnused(auxChuteDeploy);
    ignoreUnused(mostLikelyNine);
    ignoreUnused(aCharacter);
    
    std::cout << "good to go!" << std::endl;
    return 0;    
}
