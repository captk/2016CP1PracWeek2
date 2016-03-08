/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   mark.cpp
 * Author: k
 *
 * Created on 8 March 2016, 9:14 PM
 */

/* Task 3 psuedo code:
 * int assignment1max?
 * int assignment1weight?
 * int assignment2max?
 * int assignment2weight?
 * ...
 * ...
 * double assignment1mark?
 * double assignment2mark?
 * ...
 * ...
 * 
 * double finalmark = math...
 * cout << "final score: " << finalmark
 * 
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int a1max, a1weight, a2max, a2weight, a3max, a3weight, a4max, a4weight;
    double a1mark, a2mark, a3mark, a4mark, finalmark;
   
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(4);
    
    cout << "a1max: ";
    cin >> a1max;
    cout << "\na1weight: ";
    cin >> a1weight;
    cout << "\na2max: ";
    cin >> a2max;
    cout << "\na2weight: ";
    cin >> a2weight;
    cout << "\na3max: ";
    cin >> a3max;
    cout << "\na3weight: ";
    cin >> a3weight;
    cout << "\na4max";
    cin >> a4max;
    cout << "\na4weight";
    cin >> a4weight;
    
    cout << "a1mark: ";
    cin >> a1mark;
    cout << "a2mark: ";
    cin >> a2mark;
    cout << "a3mark: ";
    cin >> a3mark;
    cout << "a4mark: ";
    cin >> a4mark;
    
    finalmark = (a1mark*a1weight/a1max) + (a2mark*a2weight/a2max) + (a3mark*
            a3weight/a3max) + (a4mark*a4weight/a4max);
    finalmark = finalmark/100;
   
    
    cout << "finalmark: " << finalmark << endl;
    
    return 0;
}

