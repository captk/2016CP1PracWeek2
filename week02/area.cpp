/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   area.cpp
 * Author: k
 *
 * Created on 9 March 2016, 12:24 AM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int numSides;
    double sideLength;
    double area;
    
    cout << "How many sides in this polygon? ";
    cin >> numSides;
    
    cout << "What are the lengths of its sides? ";
    cin >> sideLength;
    
    area = (numSides * pow(sideLength, 2))/(4*tan(acos(-1)/numSides));
    cout << "The area is: " << area;
    
    
    return 0;
}

