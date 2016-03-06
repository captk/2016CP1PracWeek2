/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   arithmetic.cpp
 * Author: k
 *
 * Created on 7 March 2016, 12:59 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int x, xOriginal;
    cout << "Enter an integer for x: \n";
    cin >> x;
    xOriginal = x;

    x -= 4 * 5;
    cout << x << endl;
    x = xOriginal;
    
    x %= (16 / 2);
    cout << x << endl;
    x = xOriginal;
    
    x /= 82 % 4;
    cout << x << endl;

    return 0;
}

