#include <iostream>
#include <string>

using namespace std;

/*
    LAB 1 – INTRODUCTION TO C++

    In this lab you will practice:

    - writing a C++ program
    - printing with cout
    - using variables
    - getting input with cin
    - doing simple calculations

    Complete the TODO parts.
*/

int main()
{

    // ------------------------------------------------
    // PART 1 — Your First Output
    // ------------------------------------------------

    cout << "Welcome to the C++ Lab!" << endl;

    // TODO 1
    // Print your name
    cout <<"ali asker savas" << endl;


    // TODO 2
    // Print your department
    cout <<"computer eng" << endl;

    // TODO 3
    // Print today's year
    cout <<"2026" << endl;

    cout << endl;


    // ------------------------------------------------
    // PART 2 — Variables
    // ------------------------------------------------

    // TODO 4
    // Create an integer variable called age
    // Assign your age to it
    int age = 18;

    // TODO 5
    // Create a double variable called height
    // Example: 1.75
    float height= 1.80 ;

    // TODO 6
    // Create a string variable called name
    // Store your name
    char name= 'A' ;

    // TODO 7
    // Print all variables
   cout << age << endl;
   cout << height << endl;
   cout << name << endl;
    cout << endl;


    // ------------------------------------------------
    // PART 3 — User Input
    // ------------------------------------------------

    string city;

    // TODO 8
    // Ask the user to enter their city
    cout << " enter your city; "<< endl;


    // TODO 9
    // Read the city using cin
    cin >> city;

    // TODO 10
    // Print: "You live in <city>"
    cout <<  "You live in " << city << endl;

    cout << endl;


    // ------------------------------------------------
    // PART 4 — Numbers and Math
    // ------------------------------------------------

    int a;
    int b;

    // TODO 11
    // Ask the user to enter first number
    cout << " enter the fırst number: " ;
    
    // TODO 12
    // Read first number
   cin >> a ;

    // TODO 13
    // Ask the user to enter second number
   cout << " enter the second number :";

    // TODO 14
    // Read second number
    cin >> b ;

    // TODO 15
    // Create a variable called sum
    // store a + b
    float sum=a+b;

    // TODO 16
    // Print the sum
   cout << sum << endl;

    cout << endl;


    // ------------------------------------------------
    // PART 5 — Mini Exercise
    // ------------------------------------------------

    string studentName;
    int birthYear;

    // TODO 17
    // Ask the student name
    cout<< "what ıs your name " ;

    // TODO 18
    // Read the student name
    cin >> studentName ;

    // TODO 19
    // Ask birth year
  cout<< "what ıs your bırth year " ;

    // TODO 20
    // Read birth year
   cin >> birthYear ;

    // TODO 21
    // Calculate approximate age
    // age = 2026 - birthYear
      age = 2026 - birthYear ;

    // TODO 22
    // Print:
    // "Hello <name> your approximate age is <age>"
    cout << " hello " << studentName << " your approximate age is " << age << endl;

    cout << endl;
    cout << "Lab Finished!" << endl;

    return 0;
}
