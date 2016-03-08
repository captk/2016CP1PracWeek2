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
int main(int argc, char** argv) {
    double pmt = 10000;
    double i = 0.08;
    int n = 20;
    double pv;
    
    pv = pmt * ((1-(1/pow(1 + i, n)))/i);
    
    cout << pv << endl;
    return 0;
}

