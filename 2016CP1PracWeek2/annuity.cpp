/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   annuity.cpp
 * Author: k
 *
 * Created on 9 March 2016, 1:00 AM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

/*
 * 
 */
int main6(int argc, char** argv) {
    double pmt;
    double i;
    int n;
    double pv;
    
    cout << "Please enter your desired periodic payment: ";
    cin >> pmt;
    cout << "Please enter the interest rate: ";
    cin >> i;
    cout << "Please enter desired number of payments: ";
    cin >> n;
            
    
    pv = pmt * ((1-(1/pow(1 + i, n)))/i);
    
    cout << pv << endl;
    return 0;
}

