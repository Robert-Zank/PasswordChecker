// Purpose of the program: To check to see if the passowrd provided by the user
// satisfys a list of specific requirements.
// Copyright by Robert Zank, September 25, 2023
// Coding Trails
// Attempt #1 : Creaded a for loop to loop through all characters
// in the provided password.
// Attempt #2 : Changed the regular for loop to an advanced for
// loop to loop through all of the characters.
// Attempt #3 : Created multiple if statements to output the issues
// with the provided password, if any.

#include <iostream>
#include <cctype>

int main() {
// Create boolean values for each requirement
    bool hasLetter = false, hasNumber = false,
     hasSpecialChar = false;

    // String to hold the password inputted by the user
    std::string password;

    // Get password from the user
    std::cin >> password;

    // Loop through each character in the string
    for (char x : password) {
        // Check if this satisfies the letter criteria
        if (isalpha(x)) {
            hasLetter = true;
        // Check if this satisfies the digit criteria
        } else if (isdigit(x)) {
            hasNumber = true;
        // Check if this satisfies the special character criteria
        } else if (x == '!' || x == '#' || x == '%') {
            hasSpecialChar = true;
        }
    }

    // Code to output the issues with the password provided if any

    // Check if the password satisfies the length requirement
    if (password.length() < 8) {
        std::cout << "Too short" << std::endl;
    }

    // Check if the password satisfies the letter requirement
    if (!hasLetter) {
        std::cout << "Missing letter" << std::endl;
    }

    // Check if the password satisfies the number requirement
    if (!hasNumber) {
        std::cout << "Missing number" << std::endl;
    }

    // Check if the password satisfies the special character requirement
    if (!hasSpecialChar) {
        std::cout << "Missing special" << std::endl;
    }

    // Check if all criteria are met and print "OK"
    if (password.length() >= 8 && hasLetter && hasNumber && hasSpecialChar) {
        std::cout << "OK" << std::endl;
    }

    return 0;
}
