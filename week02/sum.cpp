/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   sum.cpp
 * Author: k
 *
 * Created on 8 March 2016, 11:30 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * NOTE: THIS PROGRAM WORKS FOR ALL POSITIVE INTEGERS
 */
int main(int argc, char** argv) {
    int lastDigit, remainingNumber,
            userInput, sumOfDigits;
    
    //sum must be 0 initially
    sumOfDigits = 0;
    
    cout << "Enter an integer between 1-999 (inclusive).\n";
    cin >> userInput;
 
    //the while loop must execute at least once
    remainingNumber = userInput;   
    
    while(remainingNumber > 0){
        lastDigit = remainingNumber%10;
        sumOfDigits += lastDigit;
        remainingNumber /= 10;
    }
    
    cout << "The sum of all digits in " << userInput << " is " << sumOfDigits;
         
    return 0;
}

