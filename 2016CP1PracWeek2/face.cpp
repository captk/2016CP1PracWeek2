/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   face.cpp
 * Author: k
 *
 * Created on 9 March 2016, 1:21 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    char side_left, side_right, eye, nose, mouth;
    
    cout << "Enter five characters (side_left, side_right, eye, nose, mouth): ";
    cin >> side_left >> side_right >> eye >> nose >> mouth;
    cout << endl;
    cout << side_left << "     " << side_right << endl;
    cout << eye << "     " << eye << endl;
    cout << "   " << nose << "   " << endl;
    cout << side_right << "  " << mouth << "  " << side_left;
        
    return 0;
}

